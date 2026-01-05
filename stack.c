#include <stdio.h>
#define UNUSED -777 //a number to signify that that element in the array hasn't been touched yet

int array[100];// outside all the funtions so it is a global variable so its already visible to everyone in this file
int stack_pointer = -1;//means an empty stack 
int size;//stack will only allow size number of elements

void init(int size_input)
{
    int i; 

    size = size_input;//since size is a global variable, if it is changed, then it is changed for everyone 
    for(i = 0; i < size_input; i++);
    {
        array[i] = UNUSED;
    }
} 

int push(int num_input_1)
{
    if(stack_pointer < size-1)
    {
        stack_pointer++;
        array[stack_pointer] = num_input_1;
        return stack_pointer; //signifies success 
    }

    else
    {
        printf("The stack is full and no more elements can be pushed on\n");
        return -1; //signifies that an error occurs and returns to main 
    }
}

int pop()
{
    int temp; 

    if(stack_pointer > -1)// no pops when the array is empty 
    {
        printf("The value popped is %d\n" , array[stack_pointer]);
        temp = array[stack_pointer];
        stack_pointer--;  
        return temp;
    }
    
    else
    {
        printf("The stack is empty and there is nothing to pop.\n\n");
        return -1; //failure 
    }
}

int print_array()
{
    int i; 

    printf("The stack pointer is currently: %d\n" , stack_pointer);

    printf("Stack is currently:\n");

    for (i = 0; i <= stack_pointer; i++)
    {
        printf("array[%d] = %d\n" , i, array[i]);
    }
}

int main()
{
    int input; 
    int push_pop_end;
    int num_input;

    printf("Input the size of the stack you want: ");
    scanf("%d" , &input);

    init(input);

    while(1)//loop forever (infinite loop)
    {
        print_array();

        printf("\nDo you want to push (1), pop (2), or end (3) the program? ");
        scanf("%d" , &push_pop_end);

        if(push_pop_end == 1)
        {
            printf("Input the number you want to push onto the stack: ");
            scanf("%d" , &num_input);
            push(num_input);
        }

        else if(push_pop_end == 2)
        {
            pop();
        }

        else
        {
            break;// jumps to the outside of the while loop
        }
    }
}