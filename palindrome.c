#include <stdio.h>

int array[50];

int main()
{
    int i = 0;
    int num1; 
    int saved_num;
    int length = 0; 
    int input;
    int x;
    int y;

    printf("Input a sequence of numbers: ");
    scanf(" %d" , &input); 
    printf("\n");

    saved_num = input; 

    for (i = 0; (saved_num > 0); i++)
    {
        num1 = saved_num % 10; // isolates the last num in the array 
        saved_num = saved_num / 10; // gets rid of the number just isolated from the array so in the next loop iteration, the next number can be isolated 
        array[i] = num1; // puts the isolated number into the array 
        length++; 
    }

    //for(i = 0; i < length; i++)
    //{
    //    printf("array[%d] = %d\n" , i, array[i]);
    //}

    for(x = 0, y = length - 1; x <= length/2; x++, y--) // for odd inputs, loop doesn't check middle element
    {
        if(array[x] != array[y])
        {
            printf("\n%d is NOT a palindrome" , input);
            return -1; // indicates failure of finding a palindrome
        }
    }

    // you can also do the same thing without the y variable becuase y = (length - 1) - x
    // for(x = 0; x <= length/2; x++) 
    //{
    //    if(array[x] != array[length - 1 - x])
    //    {
    //        printf("\n%d is NOT a palindrome" , input);
    //        return -1;
    //    }
    //}

    printf("\n%d is a palindrome" , input);
    return 0; // indicates success of finding a palindrome
}