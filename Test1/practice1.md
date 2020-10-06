
## True/False (10 pts total - 1pt each)
1. (True/**False**) C++ will automatically check for index out of bounds on arrays and throw an error if you step out of bounds.
2. (True/**False**) The following are considered “overloaded” functions because they have the same parameters: <br />
`int sum(int x, int y){/*…*/ return something_int;}`<br />
`int diff(int x, int y){/*…*/ return something_int;}`
3. (**True**/False) A pointer is a variable that holds the address of some other location in memory.
4. (True/**False**) The names apple, orange, and banana are meaningful variable names for the lengths of the legs and hypotenuse of a triangle.
5. (**True**/False) In the context of this class so far, the “stack” refers to the area of memory that all primitive named variables are stored in.
6. (True/**False**) The following piece of code will compile and run without issues.
`int double = 0;`
7. (**True**/False) In C++, truncation can occur when a double is divided by an int even if the final result is stored in a double. (ie. after: `double n = 9.0/2;` n would equal 4 due to truncation).
8. (True/**False**) Primitive arrays in C++ can easily be resized.
9. (**True**/False) A memory leak refers to space allocated by a call to new that is never deallocated with a call to delete.
10. (**True**/False) For every call to the new operator, there should be a call to delete.
---

## Multiple Choice (10 pts total - 1pt each)


11. When passing a primitive array to a function that you DO NOT want modified, it is a good idea to:<br />
a) pass the array by value, not by reference<br />
**b) pass the array as a constant array using the const keyword**<br />
c) use pointers instead since they already protect the contents in which they point to<br />
d) make the primitive array global by declaring it outside of all functions
#### Given the following code, answer questions 12-13
```int *data; 
int array[5] = {1,2,3,4,5};
int a(10),b(100);
int *d = &a;
```
12. Which of the following is not a proper initialization of the data pointer?<br />
a) `data = new int[10];`<br />
b) `data = array;`<br />
**c) `data = b;`**<br />
d) `data = &a;`
13. Which of the following boolean statements will be true?<br />
a) `&d == &a;`<br />
b) `*d == &a;`<br />
**c) `*d == a;`**<br />
d) `&d == a;`
14. Call-by-reference is denoted by the following character(s) in a function definition:<br />
**a) &**<br />
b) *<br />
c) ** <br />
d) $

#### Consider the following snippet of code and answer questions 15-16
```double pi = 3.14;
int sum(int a, int b ){
return a + b;
}
int main(){
int j = 4, k = 3, res = 0;
res = sum(j, k);
// other code ..
}
```
15. The scope of the variable pi is:<br />
a) local to the sum function<br />
b) local to main function<br />
**c) global to the entire program**<br /> 
d) global to any and every program that you write on your computer forever
16. The scope of the variable k is:<br />
a) local to the sum function<br />
**b) local to main function**<br />
c) global to the entire program<br />
d) global to any and every program that you write on your computer forever
#### Consider the following function and code segment.
```void swap( int & first , int second )
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
17. After the call to swap(j, k); what are the values of j and k?<br />
a) j == 4, k == 3;<br />
b) j == 3, k == 4;<br />
c) j == 4, k == 4;<br />
**d) j == 3, k == 3;**

18. Which of the following overloadings will be invoked by this call?<br />
`sum(1.0, 10.0);`<br />
a) `double sum(int count, double value);`<br />
**b) `double sum(double value, double count);`**<br />
c) `int sum(int value, int count);`<br />
d) None of the above, the compiler cannot decide which of these to use.
19. Which of the following overloadings will be invoked by this call?<br />
`sum(1.0);`<br />
**a) `double sum(double count, int value = 0 );`**<br />
b) `double sum(double value, double count);`<br />
c) `int sum(int value, int count);`<br />
d) None of the above, the compiler cannot decide which of these to use.
#### Consider the Following code
```[1] int main(int argc, char **argv) {
[2] int i = 100;
[3] int *iPtr;
[4] *iPtr = 101;
[5] delete i;
[6] cout << *iPtr << endl;
[7] return 0;
```
20. This code will eventually cause a segmentation fault. Why?<br />
a) Line [3] is not a proper declaration of a pointer<br />
b) the delete on line [5] is illegal because i is not a pointer<br />
**c) line [4] is writing to a location that is not reserved for your program**<br />
d) None of the above. I reject your claim there is anything wrong with this program!
---
## Free Answer (80 pts total)

21. (6 pts) List at least three good programming practices.
22. (3 pts) Describe one reasonable use of pointers (ie. describe a situation that you would want to use pointers instead of primitives).
23. (4 pts) Briefly explain the difference between stack memory allocation and heap memory allocation. What kind of variables are stored in each? In which one (stack or heap) are variables automatically deallocated by your CPU at the end of execution?
24. (10 pts) Write Boolean expressions that represent the given English expressions.
a) int n is greater than 10 but not equal to 10
b) int x is less than 100 but is not equal to 30 or 40
c) double g is a number that is less than int y/2
d) double m is even or is equal to 1
e) char c is in the range [‘a’, ‘b’, ‘c’]
```
a)
b)
c)
d)
e)
```

#### Consider the Following Code
```
int i = 10, j = 20;
int *p1, *p2;
p1 = &i;
p2 = new int;
cout << i << “ “ << j << “ “ << *p1 << “ “ << *p2 << endl;
*p1 = 15;
*p2 = 30;
cout << i << “ “ << j << “ “ << *p1 << “ “ << *p2 << endl;
delete p2;
p2 = &j;
cout << i << “ “ << j << “ “ << *p1 << “ “ << *p2 << endl;
```
25. (12 pts + 2 EC) Give the output from this code fragment For 2 pt EC, is there a memory leak? If so, how many bytes were lost (an int requires 4 bytes)?
26. (10 pts)Suppose you have the following array declaration in a program. `double yourArray[10] = {1,3,5,7,9,2,4,6,8,10};` In the implementation of C++ you are using, a double requires 8 bytes.
<br />a) When your program runs, how much memory is required for this array?
<br />b) What are the values of yourArray at the following indices:
yourArray[0] = _________ yourArray[4] = _________
yourArray[7] = _________ yourArray[9] = _________
<br />c) If yourArray starts at memory location decimal 104. What will be the addresses of
the following:
yourArray[0] -> _________ yourArray[4] -> _________
yourArray[7] -> _________ yourArray[9] -> _________

#### Consider the following code
```
int arr[5] = {1,2,3,4,5};
int i = 0;
int *p1, *p2;
p1 = &arr;
p2 = new int;
p1 = new int[6];
p2 = &i;
```
27. (10 pts) Given the following code, answer questions a-d.<br />
a) Is there a memory leak?<br />
b) How many bytes are lost?<br />
c) Are there any bytes that are unreachable by the end of the code? (ie. could not<br />
delete them even if you wanted.)<br />
d) Fix the code such that there are no memory leaks (if there were to begin with). You may either rewrite the code below or insert the new code into the code above. If you choose the latter just make sure that it is clear where you are inserting them.

28. (10pts) Properly point array1 and array2 to int arrays of size 5. Properly initialize the contents of both arrays to any values you wish. Then write a segment of code that will swap the contents of array1 and array2 using pointers.
```
int main(int argc, char **argv)
{
int *array1, *array2;
return 0;
}
```

29. (15pts + 3EC) Recall that in C++ strings are terminated by a null terminal character (‘\0’). Write a function findLetter that takes in a character array and a single character and returns the index of the first instance of the single character in the character array. If the single character is not found then your function should return -1.
```
//declare your function prototype here
int main(int argc, char **argv)
{
char data[256] = “Yay C++!”;
int index(-1);
index = findLetter(data, ‘C’);
//The resulting index should be 4.
}
//implement your function here
```
30. For 1pts EC, discuss (do not implement) how you would modify this function to return the index of the LAST instance of the single character.
31. For another 2pts EC, discuss (do not implement) possible strategies for modifying the function to return the indices of all instances of the single character sent in.
