# Assignment 6

Posted on: Thursday, May 11, 2023 2:00:00 PM KST

## Instruction

1. The assignment is individual work. Please attempt all the tasks by yourself. Plagiarism may be checked. If you ever want any help, it is possible to ask your coding trainer or the TA.

2. Submit your solutions/codes to Ajou BB. Include your name and student id when zipping the final submission. Please submit text files only!

3. Using the internet and/or an IDE is not allowed! You may get a deduction for violation.

## Questions

### Work with Pointers

1. Accept a matrix from the user, and print it back. You can set the dimensions of the matrix to user-given numbers. However, to print each element of the matrix, you will use the dereferencing operator(\*). Here are some options already given. You should find a different way to access each element.

If “matrix” is a 2D array, and i and j are the dimensions of the matrix, then each element (i,j) of the matrix can be accessed as:

```C
*(matrix[i] + j)
(*(matrix+i))[j]
*((*(matrix+i))+j)
```

2. Assume we have the following statements:

```C
#define size 5
int a[size] = {12, 4, 16, 18, 22};
int *p;
p = &a[size-1];
```

Find two ways to reverse print the contents of the array using the given pointer, p. You will avoid reassigning the pointer to a different address than the originally assigned one,

```C
&a[size-1]
```

3. Write a function named countString, which will accept a pointer to a string, and counts the length of the string. The function signature is given as:

```C
int countString (char *String)
```

Test your solution by writing a main function and passing different strings to countString.
