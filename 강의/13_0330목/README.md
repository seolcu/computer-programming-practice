# Assignment 2

Posted on: Thursday, March 30, 2023 2:00:00 PM KST

## Instruction

1. The assignment is individual work. Please attempt all the tasks by yourself. Plagiarism may be checked. If you ever want any help, it is possible to ask your coding trainer or the TA.

2. Submit your solutions/codes to Ajou BB. Include your name and student id when zipping the final submission. Please submit text files only!

3. Using the internet and/or an IDE is not allowed! You may get deduction for violation.

## Questions

1. We have designed a technique to print a user-given number in the reverse order. Draw a flow chart for the algorithm we discussed and implement the program.
2. Compute the standard deviation of ‘n’ user-given numbers according to the formula below. You can first ask the user how many numbers they intend to give. Using arrays is NOT ALLOWED. You can only use the sqrt() function from the math.h library.
3. Ask the user to give you a number and store the input in a variable, for example ‘a’. Print back the number in a way different from the solution below. Think and discuss at least five ways to print the number other than the method given in the solution.

```C
printf(“%d”, a);
```

> Example: 345 -> 345, 2->2

Note: You can choose to skip 3 by doing the following:

Revise question 2 so that you will totally avoid using the math.h library.

To approximate the square root of a number, ‘a’, you can use the following recursive (iterative) function. You can do the repetition until the absolute value of the difference between any successive terms (Xn+1 and Xn) is less than 0.001. X1 = 1. Implement the absolute value function as we discussed in the class.
