#include <stdio.h>
#define LENGTH 4


int main()
{
    int name[] = {1, 2, 3, 4};
    int reverse[] = {0, 0, 0, 0};
    int length = 4; 
    int i;
    int j = 0;

    printf("Your array backwards is: ");

    for (i = LENGTH - 1; i >= 0; i--)
    {
        printf("%d" , name[i]);
    }

     for (i = LENGTH - 1, j = 0; (i >= 0) && (j < LENGTH); i--, j++)
     //for one variable you can use the expression (length - 1)-i = j aka abs(i-(length-1))
    {
        //reverse[j] = name[i];     (with 2 variables)
        reverse[(LENGTH - 1)-i] = name[i]; //with one variable 
    }

    printf("\n\nThe saved array (backwards) is: ");
    
    for (j = 0; j < LENGTH; j++)
    {
        printf("%d" , reverse[j]);
    }
}