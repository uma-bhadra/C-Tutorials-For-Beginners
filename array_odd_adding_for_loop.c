#include <stdio.h>

/*summing the number of odd numbers in the array that the user wants*/

int main()
{
    int array[] = {7, 2, 5, 15, 0, -2, 1, 5, 2, 6, 3};
    int length = 11; /*didn't use*/
    int nums_to_print = 0;
    int i;
    int odd_even = 0;
    int sum = 0;
    int even = 0;
    int odd = 0;


    printf("Enter the number of odd integers from the array that you would like to add: ");
    scanf("%d" , &nums_to_print);


    for(i = 0; (odd < nums_to_print) && (i < length); i++)
    {
        odd_even = array[i] % 2; /*modding (getting remainder) the number of the array with 2*/

        if (odd_even == 0) /*number is even so don't add it to the sum*/
        {
            even++;
        }

        else /*the number is odd so add it to the sum*/
        {  
            sum = sum + array[i];
            odd++;
        }
    }

    printf("The sum of the first %d number of odd numbers in the array is: %d" , nums_to_print, sum);

}