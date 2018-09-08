#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ftoa.h"

char* ftoa(double number)
{

    char* first;
    char string[50];
    char string_2[50];
    double  number_2,change;
    int  fractional,decimal;


    decimal = (int) number;     //extracting decimal part form fractional

    number_2 = (double) decimal;

    change = number - number_2;

    fractional = change*1000; //extracting fractional part and changing it into integer

    // itoa(decimal,first,10);
    // itoa(fractional,sec,10);

    sprintf(string,"%d",decimal);           //changing both parts into string
    sprintf(string_2,"%d",fractional);

    strcat(string,".");                     //adding dot between numbers
    strcat(string,string_2);
    first = string;

    return first;                           //returning final string
}
