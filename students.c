//
// Created by Agat Levi on 08/04/2020.
//
#include "students.h"
#include <stdio.h>

Student unScramble (List lst){
    Student std;
    std.first = getValidName(lst);
    std.grade = getGrade(lst);
}

int getGrade(List lst){
//    TODO: Fill!!
}

List getValidName(List scrambled){
// TODO: Fill!!!
}

void printStudent(Student* std){
    printList(std->first);
    printf("%d",std->grade);
}

