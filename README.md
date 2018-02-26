# C++ tasks
-----------------------------------------------------------------------------------------------------

The first task:

  //TODO
  
  
-------------------------------------------------------------------------------------------------------

The second task `Tracing`:
  1. Using pattern `Singleton` - because I need to have only one object in order not to spoil the writting in a file.
  
  2. WriteData(x) function - this function has a template type because we need to take different objects of data,like 
  `std::string`, `int`, double.The realization is simple, just write an object into a file that opens in a consturctor of a class.
  
  3. Use `#if #define #else` and so on.. for doing tracing.
  
  
  The logic of a programm:
  
      #if Enable_trace
             //so #define my realization of a class`!!!IMPORTANT
              //I mean, the code of class runs

              AND #define macro
              (#define  doTrace(x) { Trace::tracer().writingData(#x" = "); \
                                    Trace::tracer().writingData((x)); \
                                    Trace::tracer().writingData("\n"); })
      else
          #define doTrace(x) // define nothing
          #endif
  
Note: I hope, that I am not a lazy ass and I put some checks...

ValueOfIntegral
----------------------------------------------------------------------------------------
CONTENT:
      1. VIntegral.h
         VIntegral.cpp
         Source.cpp
	 
      2. UnitTest (Framework MSV)
BUILDING FEATURES:

	Version of compiler: Microsoft Visual Studio 2015 Version 14.0.25431 Update 3
	Build proccess: debug (x86)
	Test: Using framework of MSV 2015			     
	Additional include directories: TBB
	Additional libraries: TBB lib

TASK: Calculate an integral using TBB.

EXPLANATION: 

I want to try to use "task_group" method for dividing my calculation of an integral.
For example: You have the integral f(x) from 0 to 1000, I suggest the way to calculate 
it faster,than you use an usual calling of the function for calculation. The way is 
dividing on two small tasks,the first one is from 0 to 500, then the second one is 
from 500 to 1000. I can get final values from two very tasks and sum them, getting 
the right *result of an integral faster, than it was just a calling of a function.
tink_count can help you to convince in reducing of time of getting result.

*Unfortunately, the algorithm of calculation has some inaccuracies.Espeacially, when you
use math functions like sin(),cos() and so on and use a big big segment for limits.



Finder
--------------------------------------------------------------------------------------
CONTENT:
  1. Finder.h
     Finder.cpp
     Source.cpp

  2. UnitTest (Own test: MyTestFinder.h)

  3. Additional files:
      Text.txt 

BUILDING FEATURES:

	Version of compiler: Microsoft Visual Studio 2017 Version 15.5.6
	Build proccess: debug (x86)			     
	Additional include directories: TBB, PSTL
	Additional libraries: TBB lib

TASK: Find all words in your text and sort words under their quantity.

EXPLANATION: 
How to sort words? Using std::sort(); with the right policy . The policy
helps std::sort(); to have some speed for iterations in a container.So,
To sum it up, if you have a big container for std::sort();, 
you will see the result of economy the time. 
