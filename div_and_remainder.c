#include <stdio.h>

void div_mod (int c, int d)
{
    int quotiant = 0;
    int remainder = c;

    while (remainder >= d)
    {
            remainder = remainder - d;
            quotiant = quotiant + 1;
    }
 
    printf("\nThe result of your divide is: %d\n", quotiant);
    printf("The remainder of your divide is: %d\n" , remainder);

}


int main()
{
    int a;
    int b;

    printf("Enter the first (bigger) number of your division: ");
    scanf("%d", &a);
    printf("Enter the second (smaller) number of your division: ");
    scanf("%d", &b);

    div_mod(a, b);
}
