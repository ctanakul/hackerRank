# Box It!

[Page link](https://www.hackerrank.com/challenges/box-it/problem)

### 1.inline function
- it is used for optimization at runtime.
- Normally, at runtime, the program will go find the function at the specified address, sending value back and forth.
- With inline, at compile time, the program will put the function body after getting called. This decreases runtime.
- However, the compile time will be longer.
- No need to use right now because the machine sometimes ignore and already inlined implicitly.

[More](https://stackoverflow.com/questions/1759300/when-should-i-write-the-keyword-inline-for-a-function-method)

### 2.initialization list
- just add Box(int len, int bre, int hei):l(len), b(bre), h(hei) in the header file.

[More](https://www.cprogramming.com/tutorial/initialization-lists-c++.html)

### 3.copy constructor
- class will have this constructor implicitly, but the user can define his own as well.
- Box(const Box& box_old) {l = box_old.l; b = box_old.b; h = box_old.h;}

[More](https://www.geeksforgeeks.org/copy-constructor-in-cpp/)

### 4.overloaded operators
- it is considered to be a member or global function.
[More](https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.2.0/com.ibm.zos.v2r2.cbclx01/cplr318.htm)

### 5.const member function
- const function cannot modify the object on which they are called.
- When a function is declared as const, it can be called on any type of object. Non-const functions can only be called by non-const objects.
- int getValue() const
[More](https://www.geeksforgeeks.org/const-member-functions-c/)

### 6.'this' pointer
- 'this' pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable within the body of all nonstatic functions.
- ‘this’ pointer is a constant pointer that holds the memory address of the current object.
- 'this' pointer for class X is 'X* const' type 
[More](https://www.geeksforgeeks.org/this-pointer-in-c/)

### 7.ampersand as a function parameter
- The ampersand is a reference parameter. It passes a reference to the argument, similar to passing a pointer, except that you don't need the pointer dereferencing syntax when you use it.
[More](https://www.quora.com/What-does-ampersand-operator-do-in-a-C-C++-function-argument)

### 8.friend declaration
- The friend declaration appears in a class body and grants a function or another class access to private and protected members of the class where the friend declaration appears.
[More](http://en.cppreference.com/w/cpp/language/friend)

### 9.overload a non-member function
- For example, "<<" operator function of std::ostream is a non-member function. To overload this "insertion" operator, this operator must be declared as a friend of the class in order to access the private data of that object.
[More](https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes)

### 10.use of a correct type of variable
- such as long, int etc
- beware of overflow
[More](https://stackoverflow.com/questions/31662792/multiplication-of-two-integers-in-c)