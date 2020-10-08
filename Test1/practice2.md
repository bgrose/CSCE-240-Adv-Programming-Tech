## True/False (1pt each)
1. (True/**False**) C++ will automatically check for index out-of-bounds exceptions and report
    them at compilation.
2. (True/**False**) There is no problem with these two function definitions (the C++ compiler
    will be able to distinguish between the two):
    ````
    int sum(int x, int y){/*…*/ return something_int;}
    double sum(int x, int y){/*…*/ return something_double;}
3. (**True**/False) A pointer is a variable that holds the address of some other location in
    memory.
4. (True/**False**) It is good practice to make all member variables public so that they can
    be accessed/modified easily in the main.
5. (True/**False**) Non-constant objects can only call non-constant functions.
6. (**True**/False) There should eventually be a call to the operator delete on a pointer that
    points to the memory allocated by each call to new.
7. (True/**False**) Suppose a programmer supplies the ampersand for call-by-reference in a
    prototype, but forgets to put the ampersand in the definition. The compiler will
    nevertheless correctly interpret the programmer’s intent and compile the function.
8. (**True**/False) In C++, a variable that has been defined but not initialized should not be
    used on the right side of the assignment operator.
9. (**True**/False) What will the following boolean statement evaluate to assuming x = 10?
    `((x > 10) || x)`
10. (True/**False**) When overloading operators in C++ you can change the order of operation.
 
##  Multiple Choice (1pt each)
11. The argument to the copy constructor should be ____________________.
    <br />a) Call-by-value
    <br />b) Either call-by-value or call-by-reference
    **<br />c) Call-by-reference**
    <br />d) There is no argument to a copy constructor
12. Which of the following are legal definitions with initializations? (Consider each line to be
    in a different scope so there is no multiple definition of identifiers.)
    <br />a) `int count(0), limit(19);`
    <br />**b) `int namespace(0);`**
    <br />c) `int count = 0, limit(19);`
    <br />d) `int count = 0, limit = 19;`
    <br />e) `int limit = 19;`
13. If this code fragment was executed in an otherwise correct and complete program, what
    would the output be?
    ```
    int a = 3, b = 2, c = 5;
    if (a > b)
    a = 4;
    if ( b > c)
    a = 5;
    else
    a = 6;
    cout << a < endl;
    ```
    <br />a) 3
    <br />b) 4
    <br />c) 5
    <br />**d) 6**
    <br />e) None of the above, the cout statement belongs to the else and so is skipped.
14. Assume this code fragment is embedded in an otherwise correct and complete program.
    What should be the output from this code segment?
    ```
    {
    for( int i = 0; i < 10; i++)
    {
    . . .
    }
    cout << i << endl;
    }
    ```
    <br />**a) 10**
    <br />b) 9
    <br />c) 0
    <br />d) The variable i is undefined in this scope, so this should not compile
15. Consider the following function and code segment.
    ```
    void swap( int first, int second )
    {
    int temp = first;
    first = second;
    second = temp;
    }
    int main()
    {
    // other code ...
    int j = 4;
    int k = 3;
    swap(j, k);
    // other code ..
    } 
    ```
    After the call to swap(j, k); what are the values of j and k?
    <br />a) j == 4, k == 3;
    <br />b) j == 3, k == 4;
    <br />c) j == 4, k == 4;
    <br />**d) j == 3, k == 3;**
    
16. What are the outputs of the following code:
    ```
    int main(int argc, char **argv) {
    int i = 100;
    int *iPtr;
    *iPtr = 101;
    cout << i << endl;
    cout << *iPtr << endl;
    return 0;
    }
    ```
    <br />a) 100, 101
    <br />b) 100, 100
   <br /> c) 101, 101
   <br /> **d) This program may have a run time error (segmentation fault).**
17. Given the following code:
    ``` 
    int *data;
    int array[5] = {1,2,3,4,5};
    int a(10),b(100);
    ```  
    Which of the following is not a proper initialization of the data pointer?
      
    <br />a) `data = new int[10];`
    <br />b) `data = array;`
    <br />**c) `data = b;`**
    <br />d) `data = &a;`
    <br />e) `data = new int;`
18. Which of the following are correct?
    <br />a) A constructor must be declared as the first line in the header for each class.
   <br /> b) A constructor must be declared with a return type.
    <br />c) A default constructor can only be provided by the compiler.
    <br />d) A class can have only one constructor.
    <br />**e) A class can have only one default constructor.**
    
19. Which of the following overloadings will be invoked by this call?
    sum(1.0,10.0);
   <br /> a) `double sum(int count, double value);`
   <br /> b) `int sum(double value, int count);`
   <br /> c) `int sum(int value, int count);`
   <br /> **d) None of the above, the compiler cannot decide which of these to use.**
20. When an argument is passed call-by-value, changes in the calling function __________
    affect the original variable s value; when an argument is passed call-by-reference,
    changes __________ affect the original variable s value, in the calling function.
    <br /> **a) do not, do**
    <br />b) do not, do not
    <br />c) do, do
    <br />d) do, do not
## Free Answer
21. (2pts) Give an example of when the keyword const should be used in the context of
    your myArray object. Explain your reasoning.
    - Const should be used when passing an object that you do not wish to be modified to a
     method
22. (2pts) List two good programming practices:
    - Commenting Code and Methods so others can understand
    - No Global Variables
23. (3pts) Properly point array1 and array2 to int arrays of size 5. Properly initialize the
    contents of both arrays to any values you wish. Then write a segment of code that will
    swap the contents of array1 and array2 using pointers.
    ```
    int main(int argc, char **argv)
    {
        int *array1, *array2;
        array1 = new int[5];
        array2 = new int[5];
        for(int i = 0; i < 5; i++)
        {
            array1[i] = 0; //can initialize to any value
            array2[i] = i; //can initialize to any value
        }
        int *temp = array1;
        array1 = array2;
        array2 = temp;
        delete [] array1;
        delete [] array2;
        return 0;
    }
    ```
24. (2 pts) Given the following two implementations of overloading the operator++ label one
    as pre (++a) and one as post (a++) incrementation. Assume we have a class Integer
    that holds one member variable data of type int.
    ```
    Integer& Integer::operator++(int dummy){
    Integer temp(*this);
    data = data + 1;                //Post
    return temp;
    }
    Integer& Integer::operator++(){
    data = data + 1;                //Pre
    return *this;
    }
    ```
   
25. (3pts) Give the output from this code fragment. Also indicate how many bytes of data
    will be lost after the code is run.
    ```
    int *p1, *p2, i(100);
    p1 = new int;
    p2 = &i;
    *p1 = 10;
    *p2 = 20;
    cout << *p1 << “ “ << *p2 << “ “ << i << endl;
    p1 = p2;
    cout << *p1 << “ “ << *p2 << “ “ << i << endl;
    ```
    OUTPUT:
    10 20 20
    20 20 20

    <br />BYTES LEAKED: 4 Bytes
26. (3pts)Suppose you have the following array declaration in a program.
    double yourArray[5];
    Further suppose that in the implementation of C++ you are using a double that requires
    8 bytes.
    <br />a) When your program runs, how much memory is required for this array? ***40 Bytes***
    <br /> b) Suppose further that your array starts at memory location decimal 100. What will be
    the address of yourArray[4]? ***132***
    <br />c) If you wrote to the index 7 position in yourArray to what address would this illegally
    overwrite? ***156***
  