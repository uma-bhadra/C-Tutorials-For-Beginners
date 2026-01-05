#include <stdio.h>
#define LENGTH  18

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 4, 7, 8, 9, 10, 11, 4, 12, 13, 14, 15};
    int i; 
    int input = 0;
    int instance_count = 0;

    printf("Input a number to see if it is present in the array: ");
    scanf("%d" , &input);

    for (i = 0; i < LENGTH; i++)
    {
        if(input == array[i])
        {
            instance_count ++;
        }
    }
     printf("There are %d instances of %d in the array" , instance_count, input);
}