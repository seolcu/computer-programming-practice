# Assignment 8

Posted on: Thursday, May 25, 2023 2:00:00 PM KST

## Instruction

1. The assignment is individual work. Please attempt all the tasks by yourself. Plagiarism may be checked. If you ever want any help, it is possible to ask your coding trainer or the TA.

2. Submit your solutions/codes to Ajou BB. Include your name and student id when zipping the final submission. Please submit text files only!

3. Using the internet and/or an IDE is not allowed! You may get a deduction for violation.

## Questions on Structures:

For these exercises, using functions from the “string.h” is not allowed.

1. Revise your previous calculator program to include complex numbers.

Requirements:

A. Inputs to your calculator are complex numbers and must be received from the command line as in the following example. Write your program in a file named “ComplexCalculator.c”.

> gcc -o [output] ComplexCalculator.c

> [output] n 2+3i 4+4i 5+6i 9+4i ...

B. Implement five functions: addition, subtraction, multiplication, division, and display. Apply the mathematical operations on the inputs successively. Finally, display the result inside the display function. For instance, for a given list of complex numbers A, B, C, and D; A/B/C/D = ((A/B) / C)/ D. I.e., divide A by B first; then divide the result, (A/B) by C; and continue in this manner successively.

C. You can freely decide the format of the signature/prototype of each function, but each of five functions must be implemented. Inputs are received in the main function, and the result should be displayed inside display. State any assumptions that you think will be needed to understand your functions.

### Hint:

1. You may need to implement string operations, such as one to strip off a character from a given complex number, and another to get the real and imaginary parts of the number.
2. You may additionally need to implement casting.

Total grading point is 100.

| Question 1                                                                                                                | Total: 100 |
| ------------------------------------------------------------------------------------------------------------------------- | ---------- |
| Structure is used to store the complex number                                                                             | 10         |
| The logic to strip off the character of the complex number and to get real and imaginary part is implemented              | 20         |
| The Five functions (Add, subtract, multiply, divide, display) are declared and implemented                                | 10         |
| The main function has arc and argv parameter OR, the inputs given from the command line are accepted in the main function | 10         |
| The use of switch case or any other progarmming logic to calculate the complex number is implemented                      | 20         |
| The string.h library is not used                                                                                          | 10         |
| The whole program is implemented well and works as intended                                                               | 20         |

Note: These are the outlines for grading your code, but as logic of the programming varies, so it will be scored accordingly. Feel free to email or visit TA for any queries.
