# Assignment 7

Posted on: Thursday, May 18, 2023 2:00:00 PM KST

## Instruction

1. The assignment is individual work. Please attempt all the tasks by yourself. Plagiarism may be checked. If you ever want any help, it is possible to ask your coding trainer or the TA.

2. Submit your solutions/codes to Ajou BB. Include your name and student id when zipping the final submission. Please submit text files only!

3. Using the internet and/or an IDE is not allowed! You may get a deduction for violation.

## Questions on Strings:

For these exercises, using functions from the “string.h” library discounts scored
points.

1. Define/implement the following function declaration. The function definition returns
   the size of a given string. Think of two ways of finding the size and implementing
   both ways. Hint, you may use the sizeof() function.

```C
int sizeOfString(char\* string1)
```

2. Define/implement the following function declaration. The function definition compares two strings of specified lengths for equality. If the two string arguments are equal, return one; otherwise return zero. Test your function by giving examples in the main function.

> Hint: You may need to use casting here.

```C
int compare (int length1, int length2, char* string1,
char* string2)
```

Example test case: compare(“Hi”,”hi”)// returns one

3. Write a program in a file named “yourprogram.c” to sort user-given names in alphabetical order. The user-given names can be given in the command line as in the following example:

> Hint: You may use the compare function from your solution to the problem given in question two.

gcc -o [output] yourprogram.c
[output] 5 Smith, Abel, Ashok, David, Liesbet
[Ouptut] 2 Smith, Liesbet
