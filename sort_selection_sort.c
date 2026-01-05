#include <stdio.h>

int array[] = {5, 3, 7, 1, 0}; 
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
    int low_index;
    int latest_minimum; 

    printf("The original array is: \n");
    for (i = 0; i < length; i++)
    {
        printf("array[%d] = %d\n" , i, array[i]);
    }


    for(for_cnt = 0; for_cnt < length; for_cnt++)
    {
        latest_minimum = array[for_cnt];
        low_index = for_cnt; //low_index has to start here 

        for(i = for_cnt + 1; i < length; i ++)//so that you don't keep comparing numbers that are already fixed 
        {
            swap_or_not = compare(latest_minimum, array[i]);//don't want to change actual value of i so not i++

                if(-1 == swap_or_not)//then the number is lower than the root num and needs to be saved to low_index 
                {
                    low_index = i;
                    latest_minimum = array[low_index];
                }
        }
        swap(&array[low_index], &array[for_cnt]);
    }

    printf("\nThe array after sorting from least to greatest is: \n");
    for (i = 0; i < length; i ++)
    {
        printf("array[%d] = %d\n" , i, array[i]);
    }
}