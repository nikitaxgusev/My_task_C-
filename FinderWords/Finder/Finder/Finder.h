#pragma once
#pragma warning(disable:4996)
#include "pstl\execution"
#include "pstl\algorithm"
#include "pstl\iterators.h"
#include <vector>
#include <map>
#include <iostream>
#include <regex>
#include <fstream>

#define _SCL_SECURE_NO_WARNINGS

class Finder
{
private:
	std::ifstream fileStream;
	std::ofstream fileOutput;
	std::map<std::string, unsigned int> wordsCount;

	std::vector<std::pair<int, std::string> > vec;
	std::pair<int, std::string> myPair;
	typedef std::map<std::string, unsigned int>::iterator iterator_pair;

public:
	Finder() {};
	std::vector<int>  find_words();
	~Finder();
};

