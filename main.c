//Student's name: Danielle Agat Levi
//Student's ID: 313357329


#include <stdio.h>
#include <stdlib.h>

typedef struct list_node
{
    char*  dataPtr;
    struct list_node*  next;
}ListNode;

typedef struct list
{
    ListNode* head;
    ListNode* tail;
}List;


void main()
{
    List lst;
    Student student;
    char ch;

    makeEmptyList(&lst);

    printf("Please enter the scrambled student:\n");

    ch = (char)getchar();
    while(ch != '\n')
    {
        insertDataToEndList(&lst, ch);
        ch = (char)getchar();
    }

    student = unScramble(lst);

    printStudent(&student);

    freeList(&student.first);
}