//
// Created by Agat Levi on 08/04/2020.
//

#include "errorsHandling.h"
#include <stdio.h>
#include <stdlib.h>

void checkMemoryAllocation(void* ptr){
    if(ptr == NULL){
        printf("ERROR: Memery allocation failed!");
        exit(1);
    }
}