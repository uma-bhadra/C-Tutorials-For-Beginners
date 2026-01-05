#include <stdio.h>

int main ()
{
int a[] = {1, 11, 121, 44, 35};
int length = 5;
int i; 
int sum = 0;


for (i = 0; i  < length; i++)
{
    sum = sum + a[i];
}
printf("The sum of the array is: %d", sum);
}