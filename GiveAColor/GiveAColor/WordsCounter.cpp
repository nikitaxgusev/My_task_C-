#include "WordsCounter.h"
#include "ChooseAColor.h"



std::vector<std::pair<int, std::string> > WordsCounter::counter_words()
{
	ChooseAColor c;
	
	typedef std::map<std::string, unsigned int>::iterator iterator;
	typedef std::vector<std::pair<int, std::string> >::iterator iterator_vec;
	std::vector<std::pair<int, std::string> > vec;
	std::pair<int, std::string> myPair;
	std::map<std::string, unsigned int> wordsCount;
	std::string filename;
	std::cout << "Enter html file: ";
	std::cin >> filename;
		// Begin reading from file:
		std::ifstream fileStream("text.txt");
		std::ofstream file;
		file.open(filename, std::ios_base::app);
		// Check if we've opened the file (as we should have).
		if (fileStream.is_open())
			while (fileStream.good())
			{
				// Store the next word in the file in a local variable.
				std::string word;
				fileStream >> word;

				std::cmatch result;
				std::regex regular("[\\w]+");
				if (std::regex_search(word.c_str(), result, regular))
				{

						//Look if it's already there.
						if (wordsCount.find(result[0]) == wordsCount.end())
						{
							wordsCount[result[0]] = 1; // Initialize it to 1.
							c.oneword(result[0],filename);
						}// Then we've encountered the word for a first time.
						
						else // Then we've already seen it before..
						{
							wordsCount[result[0]]++; // Just increment it.
							c.test(result[0],filename);
						}
							
				}
				else
					std::cout << "false\n";

			
			}
		else  // We couldn't open the file. Report the error in the error stream.
		{
			std::cerr << "Couldn't open the file." << std::endl;
			
		}
		for (iterator p = wordsCount.begin(); p != wordsCount.end(); p++)
		{
			myPair.first = p->second;
			myPair.second = p->first;;
			vec.push_back(myPair);
		}
	
		std::sort(vec.rbegin(),vec.rend());
		int sumWord=0;
		for (int i = 0; i < vec.size(); i++)
		{
		//	std::cout << vec[i].first << ":" << vec[i].second << std::endl;
			sumWord += vec[i].first;
		}
		std::cout << "Done!"<< std::endl;
		std::cout << "Size:" << vec.size()<<" Sum of words:" <<sumWord<< std::endl;
	
		return std::vector<std::pair<int, std::string> >(vec);
}



