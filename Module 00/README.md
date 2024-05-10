# CPP - Module 00

Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other basic stuff

## Things to do:
 - [x] Read about Orthodox Canonical Form;
 - [x] What are classes in cpp;
 - [x] Read about C++98;
 - [x] What is STL (conected to Containers and Algorithms);
 - [ ] Forbidden stuff: using namespace <ns_name> and friend keywords; Read about them;

 ### Orthodox Canonical Form:

 The Orthodox Canonical Class Form:

- A default constructor: used internally to initialize objects and data members when no other value is available.
- A copy constructor: used in the implementation of call-by-value parameters.
- An assignment operator: used to assign one value to another.
- A destructor: Invoked when an object is deleted.

### What are classes in c++:

"Class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object. For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, Car is the class, and wheels, speed limits, and mileage are their properties.

- A Class is a user-defined data type that has data members and member functions.
- Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behavior of the objects in a Class.
- In the above example of class Car, the data member will be speed limit, mileage, etc, and member functions can be applying brakes, increasing speed, etc.

An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated." - [geekforgeeks - cpp classes and objects](https://www.geeksforgeeks.org/c-classes-and-objects/)

### C++98

C++98 refers to the version of the C++ programming language standardized in 1998. It was the first officially standardized edition of C++. This standardization was a major milestone for C++ because it provided a stable, consistent set of language features and library components, which helped in ensuring portability of code across different platforms.

#### Key Features of C++98
- **Standard Template Library (STL)**: C++98 includes the Standard Template Library, which offers a rich set of template-based, generic classes and functions;
- **Exception Handling**: robust mechanism for handling runtime anomalies or errors through try, catch, and throw blocks;
- **Namespaces**: C++98 introduced namespaces, which help avoid name collisions in larger projects by encapsulating identifiers in a distinct scope;
- **Type bool**;
- **New Casts**: static_cast, dynamic_cast, const_cast, and reinterpret_cast.

### Major differences from c++98 to newer versions

#### C++03
C++03 was largely a bug-fix release with no substantial new features compared to C++98. Its main purpose was to correct inconsistencies and defects in the C++98 standard.

#### C++11 (A Major Update)

C++11 was a significant leap forward and introduced several features that profoundly changed how C++ is written and used:

- Auto Keyword.
- Range-based for Loops.
- Lambda Expressions.
- Smart Pointers: std::unique_ptr, std::shared_ptr, and std::weak_ptr for automatic and more robust memory management.
- Concurrency Support: New facilities for multithreading, including the thread library (std::thread), atomic operations, and thread-safe initialization of function-local statics.
- Move Semantics: Enables optimization of resource management, reducing the overhead of copying large objects.
- nullptr: A type-safe null pointer constant.
- Rvalue References.

#### C++14

C++14 provided several improvements and additions to make C++ easier to use:

- Generalized Return Type Deduction;
- Binary Literals and Digit Separators;
- Extended constexpr;
- Lambda Extensions.

#### C++17

C++17 added more features and further simplified the language:

- Structured Bindings;
- std::optional: Represents optional values (values that may not be present);
- Inline Variables;
- Fold Expressions;
- std::filesystem: Provides a standardized way to manipulate files and directories.

#### C++20

C++20 is the most recent standard and includes some very powerful features:

- Concepts;
- Ranges;
- Coroutines;
- Modules;
- Three-way Comparison (Spaceship Operator): Simplifies the way objects are compared.

