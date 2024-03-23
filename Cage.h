#ifndef __CAGE__
#define __CAGE__


typedef enum {
    eLion, eBear, ePenguin
} eAnimalType;

typedef struct{
    int cageCode;
    int maxAnimalInCage;
    eAnimalType cageAnimalType;
}Cage;

void initCage();



#endif