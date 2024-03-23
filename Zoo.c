#include "stdio.h"
#include "Zoo.h"
#include "General.h"

void initZoo(Zoo* pZoo)
{
    printf("---init zoo---\n");
    pZoo->zooName = getStrExactName("Enter Zoo name");
    pZoo->address = getStrExactName("Enter Zoo address");
    pZoo->employeeArr = NULL;
    pZoo->employeeCounter = 0;
    pZoo->animalArr = NULL;
    pZoo->animalCounter = 0;
    L_init(&pZoo->cageList);
}

void printZooDetails(Zoo* pZoo)
{
    printf("%s Zoo located at %s\n", pZoo->zooName, pZoo->address);
    printf("we have %d employees\n", pZoo->employeeCounter);
    printf("we have %d bears, %d lions, %d penguins\n", 2,3,4); //functions foe each animal
    printf("we have %d cages in our zoo\n",countCagesInZoo());
}

int countCagesInZoo(Zoo* pZoo)
{
    int count = 0;
    NODE* pN = pZoo->cageList.head.next; //first Node

    while (pN != NULL)
    {
        count++;
        pN = pN->next;
    }
    return count;
}

