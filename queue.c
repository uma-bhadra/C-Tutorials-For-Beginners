#include <stdio.h>
#define UNUSED -111

//global variables 
int array[100]; 
int size;
int head = 0;//head and tail are indexes 
int tail = 0;
//when head == tail, the queue is empty 
int actual_num_of_Qelements = 0; // how to differentiate between a full anf empty queue (which both is head == tail)

void init(int size_input)
{
    int i; 
    for (i = 0; i < size_input; i ++)
    {
        array[i] = UNUSED; 
    }
}

int enqueue(int input_num, int size_input_2)
{
    if(actual_num_of_Qelements == size_input_2) // queue is full 
    {
        printf("The queue is full and there is no space to enqueue any elements.\n");
    }

    else // queue is not full and has space to enqueue a new element 
    {
        array[tail] = input_num;
        tail = (tail + 1) % size_input_2; // wraps tail around with values: 0, 1, 2, ... (size_input_3 - 1) same as if/else 
        actual_num_of_Qelements++; 
    }
}

int dequeue(int size_input_3)
{
    if(actual_num_of_Qelements == 0)
    {
        printf("The queue is empty and there are no elements to dequeue.\n");
    }

    else
    {
        printf("The element dequeued is: %d\n" , array[head]); 
        head = (head + 1) % size_input_3; // wraps head around with values: 0, 1, 2, ... (size_input_3 - 1) same as if/else 
        actual_num_of_Qelements--;
    }
}

int print_queue(int queue_size_1)
{
    int j;

    printf("\nhead = %d, tail = %d, actual_num_of_Qelements = %d\n\n" , head, tail, actual_num_of_Qelements);

    printf("This is your current queue: (note -111 means empty) \n");
    for(j = 0; j < queue_size_1; j++)
    {
        printf("queue(%d) = %d\n" , j, array[j]);
    }

    printf("\n");
}

int main()
{
    int queue_size;

    printf("Please input the size of the queue you want: ");
    scanf("%d" , &queue_size); 

    init(queue_size);

    while(1)// infinite loop
    {
        int selection; 
        int insert; 
        int take_out;

        print_queue(queue_size);

        printf("Do you want to enqueue (1), dequeue (2), or end the program (3)? ");
        scanf("%d" , &selection);

        if(selection == 1)
        {
            printf("Input the number you would like to enqueue: ");
            scanf("%d" , &insert); 
            enqueue(insert, queue_size); 
        }

        else if(selection == 2)
        {
            dequeue(queue_size); 
        }

        else
        {
            break;
        }
    }
}
