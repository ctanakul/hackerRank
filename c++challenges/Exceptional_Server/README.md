# Exceptional Server

[Page link](https://www.hackerrank.com/challenges/exceptional-server/problem)

### 1.Trying and catching exceptions
- Multiple handlers (i.e., catch expressions) can be chained; each one with a different parameter type. Only the handler whose argument type matches the type of the exception specified in the throw statement is executed.
- If an ellipsis (...) is used as the parameter of catch, that handler will catch any exception no matter what the type of the exception thrown. This can be used as a default handler that catches all exceptions not caught by other handlers.
- Execution resumes after the try-catch block, not after the throw statement!.
- try-catch block can be nested, and the exception can be thrown wiht 'throw'
[More](http://www.cplusplus.com/doc/tutorial/exceptions/)

### 2.Exception class or std::exception
- std::exception AKA <exception> header, is the base class C++ library for declaring objects to be thrown as exceptions.
- This class has a virtual member function called 'what' that return a null-terminated character sequence (of type char *)

### 3.std::invalid_argument
- can beused for creating new argument
- it is an inherited object from std::logic_error from std::exception
[More](http://www.cplusplus.com/reference/stdexcept/invalid_argument/)

### 4.std::bad_alloc
- It is the inheritance type of std::exception.
- It is for reporting failure to allocate storage.
[More](http://en.cppreference.com/w/cpp/memory/new/bad_alloc)