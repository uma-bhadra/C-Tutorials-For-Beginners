
#include <stdio.h>


/*int multi (int c, int d)
{
  int result;
  result = c*d;
  return result;
}*/


int mult (int c, int d)
{
  int counter = d;
  int answer = 0;
  bool doneadding = false;

  while(doneadding == false)
  {

  if (counter > 0) 
  {
    answer = answer + c;
    counter = counter - 1;
  }
  
  else
  {
    doneadding = true;
  }
  }

  return answer;
}


int mult_optimized (int c, int d)
{
  int counter = d;
  int answer = 0;

  while(counter > 0)
  {
    answer = answer + c;
    counter = counter - 1;
  }

  return answer;
}


int main()
{
    int a = 0;
    int b = 0;
    int final = 0; 

    printf("Enter the first number to multiply: ");
    scanf("%d" , &a);
    printf("Enter the second number to multiply: ");
    scanf("%d" , &b);
    final = mult_optimized (a, b);/*the value of answer is saved to final becuase answer was a local variable in the mult function*/
    printf("The product is: %d\n", final);
}

