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

int insert(struct student_record *head_1, char input_char_1, struct student_record *s1)//note both head_1 and s1 are pointers (only need asterisk in definition)
//in actual code, the asterisk will be the contents (ex. *head_1) and without the asterisk it is the pointer (ex. head_1);; [only true when the definition has an asterisk]
{
    while(head_1 != NULL)//keep on checking for a char match until the code runs out of nodes to check 
    {
        if(input_char_1 == head_1->name_first_char)
        {
            s1->ptr = head_1->ptr;
            head_1->ptr = s1;
            return 0; 
            //0 means success;; return means break from while loop and at the same time exit the function and return to the caller function 
        }

        else
        {
            //else means the current node doesn't match and the program has to keep checking with the incremented head_1
        }

        head_1 = head_1->ptr;//head_1 is pointing to the next node now 

    }
    //at the end of the while, you are done traversing the linked list (since head_1 has reached null and no char was matched)
    printf("\nNo student record with the char %c\n" , input_char_1);
    return -1;//means failure to insert
}

int main ()
{
    char input;
    char name_char1;
    int ssn_input; 
    struct student_record *s1; //pointer to the student coming in 
    int student_count = 0;
    char input_char;
    char input_char_name;
    int input_num_SSN;

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
    }//end of while loop

    printf("\nAFTER which node do you want to insert? (input the character of an existing student record): ");
    scanf(" %c" , &input_char); 

    printf("\nEnter the first char of the new student's name: ");
    scanf(" %c" , &input_char_name);

    s1 = (struct student_record *) malloc (sizeof (struct student_record));//
    //need a fresh record becuase you don't want to overwrite the last node that was inserted in the while loop above

    s1->name_first_char = input_char_name;

    printf("\nEnter the SSN of the new student: ");
    scanf(" %d" , &input_num_SSN);

    s1->SSN = input_num_SSN;

    if(0 == insert (head, input_char, s1))
    {  
        print_list(head);//success at inserting so print the new linked list 
    }

    else
    {
        printf("\nInsertion was a failure.\n");
    }
}