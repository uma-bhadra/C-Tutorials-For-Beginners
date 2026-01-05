//insertion sort

#include <stdio.h>
//#define LENGTH  18

int main()
{
    //int array[] = {0, 1, 2, 3, 4, 5, 6, 4, 7, 8, 9, 10, 11, 4, 12, 13, 14, 15};
    int array[100];// space for 100 elements 
    int length = 10;// using only 10 elements 
    int i; 
    int input = 0;
    int instance_count = 0;  

    //top, bottom, and middle are all indexes of the array
    int top = length - 1;
    int bottom = 0;
    int middle;

    int hi;



    for (i = 0; i < length ; i++)
    {
        array[i] = i + 2; 
    }

    printf("The original array is:\n");
    for (i = 0; i < length; i ++)
    {
        printf("array[%d] = %d\n" , i, array[i]);
    }

    printf("Enter an integer to search for in the array: ");
    scanf("%d" , &input);

    while(top >= bottom)// not a for loop becuase you don't know how many times to loop
    {
        if(top == bottom)
        {
            if(array[top] == input)
            {
                printf("Found number in array[%d]\n" , top);
                return top;// doesn't do anything but returns to the OS (ignore)
            }

            else
            {
                printf("There are 0 instances of %d in the array" , input);
                return top;
            }
        }

        else if(top > bottom)
        {
            middle = (top + bottom)/2;

            if (array[middle] > input)
            {
                //array is only left part of array now
                top = middle - 1; //order matters 
            }

            else if (array[middle] < input)
            {
                //array is only right part of array 
                bottom = middle + 1;// because you already checked middle in the else below this 
            }

            else
            {
                printf("Found number in array[%d]\n" , middle);
                return top;
            }
        }
    }
    printf("There are 0 instances of %d in the array" , input);
}