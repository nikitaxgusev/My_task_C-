#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include "WordsCounter.h"


class ChooseAColor
{
public:
	std::vector<std::pair<int, std::string> > choose_a_word();
	std::vector<std::string>  take_color_for_word();
	void several_words(std::string ,std::string);
	void oneword(std::string, std::string filename);
	std::vector<std::string> getColor();


};

