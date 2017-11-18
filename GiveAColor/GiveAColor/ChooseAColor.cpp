#include "ChooseAColor.h"


void ChooseAColor::several_words(std::string  word,std::string filename)
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


