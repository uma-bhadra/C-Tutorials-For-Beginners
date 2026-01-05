#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c = 0; 
    int n = 0;
    bool done = false;

while (done == false) /*the condition can also just be n <= 0*/
{
    printf("Input the number of fibonacci numbers you want to print: ");
    scanf("%d", &n);


    if (n <= 0)
    {
        printf("Enter a valid number to print\n");
        done = false;
    }
    
    else if(n == 1)
    {
        printf("%d" , a);
        done = true;
    }

    else if (n == 2)
    {
        printf("%d " , a);
        printf("%d\n" , b);
        done = true;
    }

    else 
    {
        printf("%d " , a);
        printf("%d " , b);

        while (n > 2)
        {
            c = a + b;
            printf("%d " , c);
            a = b;
            b = c;
            n--;
        }
        done = true;
    }
}
}