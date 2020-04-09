//
// Created by Agat Levi on 08/04/2020.
//

#ifndef QUESTION_1_STUDENTS_H
#define QUESTION_1_STUDENTS_H
#include "charLists.h"

typedef struct  student{
    List first;
    int grade;
} Student;


//TODO: Add description
Student unScramble (List  lst);

//TODO: Add description
int getGrade(List lst);

//TODO: Add description
List getValidName(List scrambled);

//TODO: Add description
void printStudent(Student* std);

#endif //QUESTION_1_STUDENTS_H
