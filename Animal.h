#ifndef __ANIMAL__
#define __ANIMAL__

#include "Lion.h"
#include "Bear.h"
#include "Penguin.h"
#include "Cage.h"

typedef struct{
    union {
        Lion lion;
        Bear bear;
        Penguin penguin;
    }type;
    Cage* animalCage;
}Animal;

int feedAnimal();

void makeNoise();

void ageOneYear();

void randomHappiness();


#endif