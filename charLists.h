//Student's name: Danielle Agat Levi
//Student's ID: 313357329


#ifndef QUESTION_1_CHARLISTS_H
#define QUESTION_1_CHARLISTS_H

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

//TODO: Add description
void makeEmptyList(List* lst);

//TODO: Add description
void insertDataToEndList(List* lst,char ch);

//TODO: Add description
ListNode* createNode(char ch,ListNode* next);

//TODO: Add descreiption
void _insertNewNodeToEnd(List* lst, ListNode* newNode);

//TODO: Add description
void freeList(List* lst);

//TODO: Add description
void _free_list(ListNode* node);

//TODO: Add description
void printList(List lst);

//TODO: Add description
void _print_list(ListNode* node);

#endif //QUESTION_1_CHARLISTS_H
