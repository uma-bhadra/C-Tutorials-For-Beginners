#include <stdio.h>

int array[] = {10, 1, 8, 29, 4}; 
int length = 5;

int compare(int num1, int num2)// comparing 2 numbers, generic
{
    if(num1 > num2)
    {
        return -1;
    }

    else if(num1 == num2)
    {
        return 0;
    }

    else if(num1 < num2)
    {
        return 1; 
    }
}

int swap(int *k, int *j)//asterisk because we want to chnage the value globally and not locally 
{
    int temp;
    temp = *k;
    *k = *j;
    *j = temp;
}



int main()
{
    int i;
    int swap_or_not;// seeing if result if compare function is -1 (swap), 0, or 1
    int for_cnt;

    printf("The original array is: \n");
    for (i = 0; i < length; i++)
    {
        printf("array[%d] = %d\n" , i, array[i]);
    }


    for(for_cnt = 0; for_cnt <= 5; for_cnt++)
    {
        for(i = 0; i < length - (for_cnt + 1); i ++)//so that you don't keep comparing numbers that are already fixed 
        {
            swap_or_not = compare(array[i], array[i + 1]);//don't want to change actual value of i so not i++

            {
                if(-1 == swap_or_not)
                {
                    swap(&array[i], &array[i + 1]);//i + 1 doesn't save i + 1 back into i and therefore isn't the same as i++
                }
            }
        }
    }

    printf("\nThe array after sorting from least to greatest is: \n");
    for (i = 0; i < length; i ++)
    {
        printf("array[%d] = %d\n" , i, array[i]);
    }
}