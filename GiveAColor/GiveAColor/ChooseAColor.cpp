#include "ChooseAColor.h"

std::vector<std::pair<int, std::string> > ChooseAColor::choose_a_word()
{
	WordsCounter w;
	std::vector<std::pair<int, std::string> > vect=w.counter_words();
	std::vector<std::pair<int, std::string> > vectCopy;

	std::vector<std::pair<int, std::string> >::iterator iter;


	for (int i = 0; i < 5; ++i)
		vectCopy.push_back(vect[i]);
		

	for (int i = 0; i < 5; ++i)
	{
		std::cout << vectCopy[i].first << " : " << vectCopy[i].second << std::endl;
	}
		
	return	std::vector<std::pair<int, std::string> >(vectCopy);
}

std::vector<std::string> ChooseAColor::take_color_for_word()
{
	std::ofstream file;
	file.open("result.txt", std::ios_base::app);

	ChooseAColor c;
	unsigned char* color_str;
	std::vector<unsigned char*> colorV;
	std::vector<std::pair<int, std::string> > vectColor = c.choose_a_word();
	std::string color_line;
	std::vector<std::string> colorVec;

	for (int i = 0; i < 5; i++)
	{
		color_line = vectColor[i].second;
		colorVec.push_back(color_line);
	}
		
				
	return colorVec;
}

void ChooseAColor::test(std::string  word,std::string filename)
{
	std::vector<unsigned char*> v;
	std::ofstream file;
	file.open(filename, std::ios_base::app);


		unsigned char str[6 + 1] = { 0 };
		const char *hex_digits = "0123456789ABCDEF";
	

		for (int i = 0; i < 6; i++) {
			str[i] = hex_digits[(rand() % 16)];

		}

		file << "<font color="<< str <<">"<<word<< "</font> ";
		
}

void ChooseAColor::oneword(std::string oneword,std::string filename)
{

	std::ofstream file;
	file.open(filename, std::ios_base::app);
	file << "<font color =red><del>" << oneword << "</del></font> ";
}

std::vector<std::string> ChooseAColor::getColor()
{
	std::ifstream file;
	file.open("color.txt");
	std::string line;
	std::vector<std::string> v;

	while (std::getline(file, line))
	{
		v.push_back(line);
	}


	return std::vector<std::string>(v);
}
