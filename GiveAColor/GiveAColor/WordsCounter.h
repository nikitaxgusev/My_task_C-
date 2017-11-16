#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <map>
#include <iterator>
#include <regex>
#include <algorithm>

class WordsCounter
{

public:
	std::vector<std::pair<int, std::string> > counter_words();
};

