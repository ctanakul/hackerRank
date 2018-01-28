# Abstract Classes - Polymorphism

[Page link](https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem)

### 1.Linked list
- A linear data structure like array
- Does not store at contiguous location
- Inserting a new element in an array can be expensive since blocks of data has to be shifted
- Doubly linked list has 2 pointers, previous and next pointer.
- Thus, the advantages over array would be
-- Dynamic size
-- Ease of insertion and deletion
- However, drawbacks would be
-- Random access is not allowed. Need to access elements sequentially from the first node. Thus, binary search is not allowed.
-- extra memory space for a pointer is required.
[More](http://www.cplusplus.com/doc/tutorial/exceptions/)

### 2.Constructor of derived classes
- When base class in instantiated
-- Memory for base is set aside
-- The appropriate Base constructor is called
-- The initialization list initializes variables
-- The body of the constructor executes
-- Control is returned to the caller
- When derived class is instantiated
-- Memory for derived is set aside (enough for both the Base and Derived portions)
-- The appropriate Derived constructor is called
-- The Base object is constructed first using the appropriate Base constructor. If no base constructor is specified, the default constructor will be used.
-- The initialization list initializes variables
-- The body of the constructor executes
-- Control is returned to the caller
[More](http://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-derived-classes/)

### 3.Initialization value of derived class
- to initialize value inside base class, we basically called Base class constructor with desired value of parameters in initialization list
- therefore, we can initialize private variable in base class by using base class constructor AKA the function of Base class. 
[More](http://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-derived-classes/)

### 4.Pointer declaration
- It's simple, just any declaration in the form of 'type *ptr'
- e.g. int *ptr, Node *ptr

### 5.Map in C++
- associative container that stores data inthe form of key and a mapped value
- it is ordered, therefore slower than std::unordered_map
- however, its data can be found via an iterator
- in essence, it stores a bunch of std::pair<const x, y> which coupling together a pair of values, which may be different types.
- std::pair values can be accessed by its public members, "first" and "second".
[More](http://www.cplusplus.com/reference/utility/pair/)

### 6. initializing object allocated with new
- return the a non-null pointer to the first byte of this block
- on failure, it throws the bad_alloc exception
[More](https://msdn.microsoft.com/en-us/library/kewsb8ba.aspx#Anchor_4)

### 7. iterator
- it is pointing to an item that is part of a larger container of items
- the element of that iterator can also be accessed by dereferencing or "asterisk"

### 8. map functions
- map::find() returns an iterator if a specified key is found
- otherwise, returns an iterator to map::end, which is pass-the-end element or the element after the last key. It does not point to any iterator and thus cannot be dereferenced,
[More](http://www.cplusplus.com/reference/map/map/find/)
- map::count() returns the number of a specified key within a container
- Actually, it can only return 1 or 0 since keys cannot be the same.

### 9. assign a value to multiple variables
- You can write a = b = val;

