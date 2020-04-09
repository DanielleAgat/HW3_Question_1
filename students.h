//Student's name: Danielle Agat Levi
//Student's ID: 313357329


#ifndef QUESTION_1_STUDENTS_H
#define QUESTION_1_STUDENTS_H
#include "charLists.h"
#include <stdbool.h>

typedef struct  student{
    List first;
    int grade;
} Student;

//This macro returns 'true' if the given char is a digit, 'false' otherwise.
#define isNum(x) ((((x) <= '9') && ((x) >= '0')) ? (true) : (false))

//TODO: Add description
Student unScramble (List  lst);

//TODO: Add description
void createStudent(List* lst,int* pGrade);

//TODO: Add description
void printStudent(Student* std);

//This function casts a char type integer into int type.
int parseInt(char ch);

#endif //QUESTION_1_STUDENTS_H
