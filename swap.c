//read in 2 values, then swap the numbers to each others memory locations 

#include <stdio.h>

int swap(int *i, int *j)//*i is the pointer to i (mem location of i)
{
    int temp1;

    printf("Incoming integers are %d and %d" , *i, *j);//accessing the content of the pointer (dereferencing)
    temp1 = *i;
    *i = *j;
    *j = temp1; 
    printf("\nAfter swap the integers are %d and %d" , *i, *j);// two things change so you have to pass it by reference not by 
    //value becuase functions can only return one value
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int temp = 0;


    printf("Input your first number: ");
    scanf("%d" , &num1);

    printf("Input your second number: ");
    scanf("%d" , &num2);

    printf("\nNow %d (number 1) and %d (number 2) will be swapped\n\n" , num1, num2);

    swap(&num1, &num2);

printf("\nafter %d (number 1) and %d (number 2) will be swapped\n\n" , num1, num2);// changes the values in the main program too
}