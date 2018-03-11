#pragma warning(disable:4996)
#include "pstl\execution"
#include "pstl\algorithm"
#include <iostream>
#include <vector>
#include <tbb\task_group.h>
#include <tbb\tick_count.h>
#include "opencv2\highgui.hpp"
#include <math.h>
#define _SCL_SECURE_NO_WARNINGS

double calcValue(double n)
{
	return (n*sin(n)) ;
}


int main()
{
	std::vector<double> vecRes;
	std::vector<double> vec;
	int size = 65536 * 2;
	for (int i = 0; i < size; i++) {
		vec.push_back(i);
	}
		
		
	vecRes.resize(vec.size());

	tbb::tick_count point_start = tbb::tick_count::now();
	std::transform(pstl::execution::par_unseq, vec.begin(), vec.end(),vecRes.begin(), calcValue);
	std::sort(pstl::execution::par_unseq, vecRes.begin(), vecRes.end());
	tbb::tick_count point_end = tbb::tick_count::now();
	std::cout << "Time: " << (point_end - point_start).seconds() << " seconds." << std::endl;

	
	cv::Mat myMat = cv::Mat(vecRes).reshape(0, 512);
	myMat.convertTo(myMat, CV_8UC1);
	cv::imshow("My Mat", myMat);
	cv::waitKey();

	system("pause");
	return 0;
}