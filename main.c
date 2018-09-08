#include <stdio.h>
#include <stdlib.h>
#include "ftoa.h"
#include <string.h>



int main(void)
{
    //EXAMPLE:

    double  a = 10000000.455;
    double  b = 253.898;
    char* string_3;
    char* string  = ftoa (b);
    strcpy(string_3,string);
    strcat(string_3," and ");
    char *string_2 = ftoa(a);
    strcat(string_3,string_2);


    printf ("\nRES:'%s'",string_3);


    return 0;
}
