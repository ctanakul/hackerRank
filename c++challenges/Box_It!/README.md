# Box It!

[Page link](https://www.hackerrank.com/challenges/box-it/problem)

### 1.inline function
- it is used for optimization at runtime.
- Normally, at runtime, the program will go find the function at the specified address, sending value back and forth.
- With inline, at compile time, the program will put the function body after getting called. This decreases runtime.
- However, the compile time will be longer.
- No need to use right now because the machine sometimes ignore and already inlinedimplicitly.

[More](https://stackoverflow.com/questions/1759300/when-should-i-write-the-keyword-inline-for-a-function-method)

### 2.initialization list
- just add Box(int len, int bre, int hei):l(len), b(bre), h(hei) in the header file.

[More](https://www.cprogramming.com/tutorial/initialization-lists-c++.html)

### 3.copy constructor
- class will have this constructor implicitly, but the user can define his own as well.
- Box(const Box& box_old) {l = box_old.l; b = box_old.b; h = box_old.h;}

[More](https://www.geeksforgeeks.org/copy-constructor-in-cpp/)