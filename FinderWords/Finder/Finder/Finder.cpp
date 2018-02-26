#include "Finder.h"


std::vector<int> Finder::find_words()
{
	fileStream.open("Text.txt", std::ios_base::app);
	// Check if we've opened the file (as we should have).
	if (fileStream.is_open()) {
		while (fileStream.good()) {
			// Store the next word in the file in a local variable.
			std::string word;
			fileStream >> word;

			std::cmatch result;
			std::regex regular("[\\w]+");
			if (std::regex_search(word.c_str(), result, regular)) {

				//Look if it's already there.
				if (wordsCount.find(result[0]) == wordsCount.end()) {
					wordsCount[result[0]] = 1;
				}

				else {
					wordsCount[result[0]]++;
				}
			}
			else {
				std::cout << "Error: regex_search() couldn't find anything.\n";
			}
		}
	}
	else {
		std::cerr << "Error: Couldn't open the file for reading." << std::endl;
	}



	for (iterator_pair p = wordsCount.begin(); p != wordsCount.end(); p++) {
		myPair.first = p->second;
		myPair.second = p->first;;
		vec.push_back(myPair);
	}

	std::sort(pstl::execution::par_unseq, vec.rbegin(), vec.rend());

	
	std::vector<int> v;
	fileOutput.open("Output.csv", std::ios_base::app);
	int sumWord = 0;

	for (int i = 0; i < vec.size(); i++) {
		fileOutput<< vec[i].first << " : " << vec[i].second << std::endl;
		v.push_back(vec[i].first);
		sumWord += vec[i].first;
	}
	fileOutput << "Sum of words: "<<sumWord << std::endl;
	
	
	return std::vector<int>(v);
	
}


Finder::~Finder()
{
	fileStream.close();
	fileOutput.close();
}

