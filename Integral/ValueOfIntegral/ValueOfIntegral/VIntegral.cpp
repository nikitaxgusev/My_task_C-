#include "VIntegral.h"

float VIntegral::myintgral_func(float x)
{
	return (x*x) / (x + x);
	//return (2*(x + x)) / x;;
	//return x+1;
}

float VIntegral::calculate_integral(float a, float b)
{
	float n = 8.0, h=0.0, S = 0.0, x = 0.0;
	h = (b - a) / n;
	for (int i = 0; i<n; i++)
	{
		x = a + h*(i + 0.5);
		S += myintgral_func(x);
	}
	S *= h;
	return S;
}

void VIntegral::show()
{
	float A = 0.0;
	float B = 0.0;
	float C = 0.0;

	tbb::tick_count point_start = tbb::tick_count::now();
	C=calculate_integral(0, 1000);
	tbb::tick_count point_end = tbb::tick_count::now();

	std::cout << "Called function WITHOUT using TBB: " << std::endl;
	std::cout << "The result of calculatting: " << C << std::endl;
	std::cout << "Time: " << (point_end - point_start).seconds() << " seconds." << std::endl;

	std::cout << std::endl;



	std::cout << "Called function WITH using TBB: " << std::endl;
	tbb::task_group g;
	tbb::tick_count p_start = tbb::tick_count::now();

	g.run([&] {A = calculate_integral(0, 500); });
	g.run([&] {B = calculate_integral(500, 1000); });

	g.wait();
	tbb::tick_count p_end = tbb::tick_count::now();
	std::cout << "The result of calculatting: " << A+B << std::endl;
	std::cout <<"Time: "<< (p_end - p_start).seconds() << " seconds." << std::endl;
}
