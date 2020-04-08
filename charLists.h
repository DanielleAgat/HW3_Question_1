//
// Created by Agat Levi on 08/04/2020.
//

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
void freeList(List* lst);

#endif //QUESTION_1_CHARLISTS_H
