#ifndef __BEAR__
#define __BEAR__


typedef enum {
    eWhite, eBlack, eBrown
} eColor;

typedef struct{
    char* name;
    int age;
    double weight;
    eColor color;
    int happiness;
}Bear;

void initBear();


#endif