#include <stdio.h>
#define LENGTH  16

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int i; 

    for(i = 0; i < LENGTH; i = i + 3)
    {
        if (array[i]%2 == 0)// even number so add 10 to it
        {
            array[i] = array[i] + 10; 
        }

        //else
        //{

        //}
    }

    for (i = 0; i < LENGTH; i ++)
    {
        printf("array[%d] = %d\n" , i, array[i]);
    }
}