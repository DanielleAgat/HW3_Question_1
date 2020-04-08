//
// Created by Agat Levi on 08/04/2020.
//

#include <stdio.h>
#include "charLists.h"
#include <stdlib.h>

void makeEmptyList(List* lst){
//    TODO: fill!!!
}

void insertDataToEndList(List* pLst,char ch){
//  TODO: fill!!!!
}

void freeList(List lst){
    _free_list(lst.head);
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
