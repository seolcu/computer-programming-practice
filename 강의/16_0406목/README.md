# Instruction

1. The assignment is individual work. Please attempt all the tasks by yourself. Plagiarism may be
checked. If you ever want any help, it is possible to ask your coding trainer or the TA.

2. Submit your solutions/codes to Ajou BB. Include your name and student id when zipping the
final submission. Please submit text files only!

3. Using the internet and/or an IDE is not allowed! You may get a deduction for violation.

# Questions

For the exercises below, you can use the following code snippet to set the size of an array to a
user-given value.

```C
#include<stdio.h>
void main()
{
int size;
scanf("%d", &size);
int array[size];
}
```

1. Repeat exercise 1 from the previous assignment: compute the standard deviation of the
numbers. You can use any function provided by the math.h library. This time, however,
you SHOULD USE an array to store and retrieve the given numbers.

2. Let’s have the following definition of an array. An array is defined to be left-skewed if
the sum of the elements to the left of the mid-element is greater than the sum of the
elements to the right of the mid-element. Otherwise, we define the array as right-skewed.
Accept at least ten numbers from the user, and store the inputs in an array. Then check
for the direction of skewness.

3. Write a C program to combine-in-order the elements of two different arrays A and B.
Assume elements in A&B are ordered. Put the result in another array C. Receive the sizes
of A and B from the user.

## Example:
1. If A = {3,7,9} and B={1,2,3,4,11} then C should contain {1,2,3,4,7,9,11}
2. If A = {1,2,3,4,10}, B ={8,9} then C should contain {1,2,3,4,8,9,10}