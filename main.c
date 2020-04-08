//Student's name: Danielle Agat Levi
//Student's ID: 313357329

// TODO: Add description

#include <stdio.h>
#include "students.h"

void main(){
    List lst;
    Student student;
    char ch;

    makeEmptyList(&lst);
    printf("Please enter the scrambled student:\n");

    ch = (char)getchar();
    while(ch != '\n'){
        insertDataToEndList(&lst, ch);
        ch = (char)getchar();
    }

    student = unScramble(lst);
    printStudent(&student);
    freeList(&student.first);
}