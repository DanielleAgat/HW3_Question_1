//
// Created by Agat Levi on 08/04/2020.
//

#include <stdio.h>
#include "charLists.h"
#include <stdlib.h>
#include "errorsHandling.h"

void makeEmptyList(List* lst){
    lst->head = lst->tail = NULL;
}

void insertDataToEndList(List* lst,char ch){
    ListNode* newNode = createNode(ch,NULL);
    _insertNewNodeToEnd(lst,newNode);
}

ListNode* createNode(char ch, ListNode* next){
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    checkMemoryAllocation(newNode);
    newNode->dataPtr = (char*)malloc(sizeof(char));
    *(newNode->dataPtr) = ch;
    newNode->next = next;
    return newNode;
}

void _insertNewNodeToEnd(List* lst, ListNode* newNode){
    newNode->next = NULL;
    if(lst->tail == NULL) {
        lst->tail = lst->head = newNode;
    }else{
        lst->tail->next = newNode;
        lst->tail = newNode;
    }
}

void freeList(List* lst){
    _free_list(lst->head);
}

void _free_list(ListNode* node){
    ListNode* temp;
    while(node != NULL){
        temp = node;
        node = node->next;
        free(temp);
    }
}

void printList(List lst){
    _print_list(lst.head);
}

void _print_list(ListNode* node){
    while(node != NULL){
        printf("%c",*(node->dataPtr));
        node = node->next;
    }
}
