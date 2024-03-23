#ifndef __LION__
#define __LION__


typedef enum {
    eWhite, eBlack, eBrown
} eColor;

typedef struct{
    char* name;
    int age;
    double weight;
    eColor color;
    int happiness;
}Lion;

void initLion();




#endif