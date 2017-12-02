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

  
