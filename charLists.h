//Student's name: Danielle Agat Levi
//Student's ID: 313357329


#ifndef CHARLISTS_H
#define CHARLISTS_H

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

//This function creates a new (empty) list.
void makeEmptyList(List* lst);

//This function gets a char and creates a new node with the given char as its pointed data
//Then it inserts it to the end of the list and sets it as the new tail.
void insertDataToEndList(List* lst,char ch);

//This function creates a new node, containing a given char as its pointed data.
ListNode* createNode(char ch,ListNode* next);

//This function is an inner function, it creates a new node to list.
void _insertNewNodeToEnd(List* lst, ListNode* newNode);

//This function frees a given list's memory.
void freeList(List* lst);

//This function is an inner function, it frees a given node.
void _free_list(ListNode* node);

//This function prints a given list.
void printList(List lst);

//This function is an inner function. It prints a given node.
void _print_list(ListNode* node);

#endif