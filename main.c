//Student's name: Danielle Agat Levi
//Student's ID: 313357329

/* The following program gets a scrambled first name of student with it's grade.
 * Then it unscramble it and prints the student's first name and grade.
 */

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