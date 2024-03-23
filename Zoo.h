#ifndef __ZOO__
#define __ZOO__

#include "list.h"
#include "Employee.h"
#include "Animal.h"

typedef struct{
    char* zooName;
    char* address;
    Employee** employeeArr;
    int employeeCounter;
    Animal* animalArr;
    int animalCounter;
    LIST cageList;
}Zoo;

void initZoo(Zoo* pZoo);

void printZooDetails(Zoo* pZoo);

int countCagesInZoo(Zoo* pZoo);


#endif