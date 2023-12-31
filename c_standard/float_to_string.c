#include <stdio.h>

int main (void) {
    
    printf("123456 %%f        : %14f\n", 123456.f);
    printf("12345.6 %%f       : %14f\n", 12345.6f);
    printf("1234.56 %%f       : %14f\n", 1234.56f);
    printf("123.456 %%f       : %14f\n", 123.456f);
    printf("12.3456 %%f       : %14f\n", 12.3456f);
    printf("1.23456 %%f       : %14f\n", 1.23456f);

    printf("0.123456 %%f      : %14f\n", 0.123456f);
    printf("0.0123456 %%f     : %14f\n", 0.0123456f);
    printf("0.00123456 %%f    : %14f\n", 0.00123456f);
    printf("0.000123456 %%f   : %14f\n", 0.000123456f);
    printf("0.0000123456 %%f  : %14f\n", 0.0000123456f);
    printf("0.00000123456 %%f : %14f\n", 0.00000123456f);

    printf("0.999999 %%f      : %14f\n", 0.999999f);
    printf("0.9999999 %%f     : %14f\n", 0.9999999f);

    printf("0.0001119 %%f     : %14f\n", 0.0001119f);
    printf("0.0000099 %%f     : %14f\n", 0.0000099f);

    return 0;
}
