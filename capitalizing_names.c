#include <stdio.h>
#define     LENGTH      4 //symbolic constant; compiler directive (no = or ;)

int main()
{
    char name[] = "JoHn";
    int i;
    int length = 4; 

    printf("Name before capitalization:\n");

    for(i = 0; i < LENGTH; i++)
    {
        printf("array[%d] = %c\n" , i, name[i]);
        //note %c for character arrays
    }

    printf("Name is: %s (string version)\n" ,  name);


    for(i = 0; i < length; i++)
    {
        if((name[i] >= 'a') && (name[i] <= 122)) //can do either 'a' or 122 (ascii of z) to compare 
        {
        name[i] = name[i] - 32; 
        //32 is the difference between ascii codes of the capital and lowercase version of each letter
        }

        else
        {
            //don't have to put anything here 
        }
    }
    

    printf("\nName after capitalization:\n");

    for(i = 0; i < length; i++)
    {
        printf("array[%d] = %c\n", i, name[i]);
    }

    printf("Name is: %s\n" , name); 
}