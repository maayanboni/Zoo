#ifndef __EMPLOYEE__
#define __EMPLOYEE__

#define NUM_SIZE 4

typedef enum {
    eFemale, eMale
} eGender;

typedef enum {
    eSupervisor, eGeneralWorker
} eJob;

typedef struct{
    char employeeNumber[NUM_SIZE];
    char* name;
    eGender gender;
    eJob jobRule;

}Employee;


void initEmployee();

void setJobRule();


#endif