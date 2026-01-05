#include <stdio.h>

int main() {
  char name[] = "John";
  int i = 0;
  bool printed = false;
  
  printf("Please input an integer: ");
  while (printed == false)
  {
    scanf("%d", &i);
    if ((i>=0) && (i<=3))
    {
      printf("Hello %c \t %d \n\n !", name[i], i);
      printed = true;
    }
    else  
    {
      printf("Please input a valid number: ");
   }
  }
 /* return 0;*/
}

void mult (int a, int b)
{
  int result;
  result = a*b;
  printf("The product is: %d\n", result);
}