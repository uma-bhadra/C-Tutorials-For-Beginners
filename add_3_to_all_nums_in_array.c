#include <stdio.h>

int add_3_to_all(int arrayinside[], int lengthinside, int num)
//could also put an asterix in front of arrayinside instead of the []
{
    int i;

    for(i = 0; i < lengthinside; i++)
    {
        arrayinside[i]+= num;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10;
    int i;
    int num_to_add; 

    printf("Enter a number that you would like to add to all the elements in the array: ");
    scanf("%d", &num_to_add);

    add_3_to_all(array, length, num_to_add); //passing a pointer (array is the pointer to the first element) to the function
    //and that's how the function changes the values of the array in the main program 

    for (i = 0; i < length; i++)// easiest way in C to print all elements of an array 
    {
        printf("array[%d] = %d\n" , i, array[i]);
    }
}