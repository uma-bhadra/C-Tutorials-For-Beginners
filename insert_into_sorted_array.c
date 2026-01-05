//insertion sort

#include <stdio.h>
//#define LENGTH  18

int insertion_index (int input_1, int array_1[], int length_1)
{
    int i; 

     for (i = 0; i < length_1; i++)
    {
        if (input_1 <= array_1[i])
        {
            printf("found an insertion point %d, %d, %d\n" , i, array_1[i], input_1); 
            return i; 
        }
    }

}

int main()
{
    //int array[] = {0, 1, 2, 3, 4, 5, 6, 4, 7, 8, 9, 10, 11, 4, 12, 13, 14, 15};
    int array[100];// space for 100 elements 
    int length = 10;// using only 10 elements 
    int i; 
    int input = 0;
    int instance_count = 0;

    int j;
    int k; 


    for (i = 0; i < length ; i++)
    {
        array[i] = i + 2; 
    }

    for (i = 0; i < length; i ++)
    {
        printf("array[%d] = %d\n" , i, array[i]);
    }

    printf("Enter an integer to insert in the array: ");
    scanf("%d" , &input);


    j = insertion_index(input, array, length);

    //shift all elements to the right 
    for (k = length; k > j; k--)//go from greatest element down 
    {
        array[k] = array[k-1]; /////////////////////////*
    }

    array[j] = input;//////////////// order matters 
    
    for (i = 0; i < length+1; i ++)
    {
        printf("array[%d] = %d\n" , i, array[i]);
    }
}