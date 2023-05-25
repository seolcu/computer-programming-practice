#include <stdio.h>

typedef struct
{
    float real;
    float imag;
} complex;

complex addition(complex a, complex b)
{
    complex c = {a.real + b.real,
                 a.imag + b.imag};
    return c;
}

int main()
{
    complex a = {3, 5}, b = {2, 3};
    complex c = addition(a, b);
    printf("%f + %fi\n", c.real, c.imag);
    return 0;
}
