//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#include "students.h"
#include <stdio.h>

Student unScramble (List lst){
    Student std;
    std.first = lst;
    createStudent(&std.first,&std.grade);
    return std;
}

void createStudent(List* lst,int* pGrade){
    List scrambled = *lst;
    ListNode* current = scrambled.head;
    ListNode* prev = scrambled.head;
    char tmpChar;
    int grade = 0;

    while(current != NULL){
        tmpChar = *(current->dataPtr);
        if(isNum(tmpChar)){
            grade = (grade*10) + parseInt(tmpChar);

            if(prev == current)
                scrambled.head = current->next; //removes node and set new head
            else
                prev->next = current->next; //removes node

            current = prev->next;
        }else{
            prev = current;
            current = current->next;
        }
    }
    *pGrade = grade;
    *lst = scrambled;
}

void printStudent(Student* std){
    printf("First name: ");
    printList(std->first);
    printf("\nGrade: %d",std->grade);
}

int parseInt(char num){
    int integer;
    sscanf(&num,"%d",&integer);
    return integer;
}