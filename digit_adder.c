#include <stdio.h>

int main ()
{
    int last_num = 0;
    int sum = 0;
    int num = 0;

    printf("Input a string of numbers that you want to add (ex. 1234): ");
    scanf("%d" , &num);


    while (num >= 1)
    {
        last_num = num % 10; /*gets the last digit of the number*/
        sum = sum + last_num;
        num = num / 10; /*ex. 325 now becomes 32 and in the next loop 2 will be isolated and added to the running sum*/
    }

    printf("\nThe sum of the string of numbers is: %d" , sum);
}
