#ifndef __PENGUIN__
#define __PENGUIN__


typedef enum {
    eWhite, eBlack, eBrown
} eColor;

typedef struct{
    char* name;
    int age;
    double weight;
    eColor color;
    int happiness;
}Penguin;

void initPenguin();





#endif