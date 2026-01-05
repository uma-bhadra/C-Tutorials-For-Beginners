#include <stdio.h>
#include <stdlib.h> // this is needed for malloc's definition 

//global struct
struct student_record 
{
    char name_first_char;
    int SSN;
    struct student_record *ptr;// type and then pointer to next student record 
};  /////////////take note of semicolon since this is a definition NOT a function

struct student_record *head; //star for pointer (head is a structure pointer)

//-----------------------------------------------------------------------------------------------

struct student_record *init_list()// returns a null head pointer (empty linked list)
{
    return NULL;// null pointer defined by C 
}

//hd is a local variable because we don't want to change the global variable
int print_list (struct student_record *hd)// prints all the students in the linked list (struct student_record is the type for head)
{
    printf("\n*****print_list called\n");
    while(hd != NULL)//if head is not a null pointer then go print 
    {
        printf("\nStudent record:\n"); 
        printf("Name: %c, SSN: %d" , hd->name_first_char , hd->SSN);// arrow instead of a dot because head is a pointer 
        hd = hd->ptr;
    }
    printf("\nDone printing the linked list******\n");
}

int main ()
{
    char input;
    char name_char1;
    int ssn_input; 
    struct student_record *s1; //pointer to the student coming in 
    int student_count = 0;

    head = NULL; // does same thing as head = init_list()

    print_list(head);// original empty list 

    while(1)//infinite while loop 
    {
    printf("Would you like to enter a student into the linked list? (y/n) ");
    scanf(" %c" , &input);//ALWAYS put a space before the %... in scan (bug in C)

    if('y' == input)
    {
        student_count++;

        printf("\nInput the first char of the student's name: \n");//have to put a space before the %c in the next line(bug in C)
        scanf(" %c", &name_char1);//name_input itself (all array names) is a pointer so no need for & when scanning 

        // The following is a standard way to allocate memory for a struct and assign it to a pointer of the same type 
        // C's standard function sizeof returns the number of bits needed for storing a struct 
        // malloc inputs a number of bits and returns a struct pointer 
        s1 = (struct student_record *) malloc (sizeof (struct student_record)); //has to be written before anything is saved to s1/before s1 is used 

        s1->name_first_char = name_char1;// arrow not dot becuase it is not an actual structure but a POINTER to a structure

        printf("\nInput the SSN of the student: \n");
        scanf(" %d" , &ssn_input);////note the space 

        s1->SSN = ssn_input;

        s1->ptr = head;//because head points to start of list at any given time 
        head = s1; //inserts before the first node (kind of like a stack)

        print_list(head);//head is already of type pointer so no need for an asterisk 
    }

    else 
    {
        break; //if input is anything other than y, the program exits the while loop 
    }
    }
}