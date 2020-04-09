//Student's name: Danielle Agat Levi
//Student's ID: 313357329


#ifndef STUDENTS_H
#define STUDENTS_H
#include "charLists.h"
#include <stdbool.h>

typedef struct  student{
    List first;
    int grade;
} Student;

//This macro returns 'true' if the given char is a digit, 'false' otherwise.
#define isNum(x) ((((x) <= '9') && ((x) >= '0')) ? (true) : (false))

//This function gets a list of pointers to chars and creates a Student structure from it.
Student unScramble (List  lst);

//This function splits the alphabet chars and integers chars and set them to student's first name and it's grade.
void createStudent(List* lst,int* pGrade);

//This function prints a student's first name and grade.
void printStudent(Student* std);

//This function casts a char type integer into int type.
int parseInt(char ch);

#endif