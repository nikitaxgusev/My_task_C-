#pragma once
#include <iostream>
#include <string>
#include <fstream>

#define Enable_Trace
#if defined(Enable_Trace)


class Tracing
{

private:
	Tracing() 
	{
		TraceFile.open("tracing.txt");
	};

	~Tracing() 
	{
		TraceFile.close();
	};
	Tracing(Tracing const&) = delete;
	Tracing& operator=(Tracing const&) = delete;

	std::ofstream TraceFile;
public:
	static Tracing& Instance()
	{
		static Tracing t;
		return t;
	}

	template <class T>
	void writeData(const T& object)
	{
		TraceFile << object;
	}
};

#define doTrace(x){ Tracing::Instance().writeData(#x" = ");\
					Tracing::Instance().writeData(x);\
					Tracing::Instance().writeData("\n");} 

#else 
#define doTrace(x)
#endif

