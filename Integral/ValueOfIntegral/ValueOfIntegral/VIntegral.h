#pragma once
#include "tbb/tick_count.h"
#include "tbb/task_group.h"
#include <iostream>
#include <cmath>

class VIntegral
{
	float myintgral_func(float x);

public:

	VIntegral() {};
	float calculate_integral(float a, float b);
	void show();
	~VIntegral() {};
};

