#ifndef DOCTORS_H_INCLUDED
#define DOCTORS_H_INCLUDED

#include <string.h>
#include "mainmain.h"
#define MAX_LINE_LENGTH 100
#define MAX_DOCTORS 100

typedef struct {
    char name[MAX_LINE_LENGTH];
    char city[MAX_LINE_LENGTH];
    char phone[MAX_LINE_LENGTH];
    char specialist[MAX_LINE_LENGTH];
} Doctor;

Doctor doctors[MAX_DOCTORS];
int numDoctors = 0;

void loadDoctorsFromFile(const char *filename) {
    FILE *file = fopen("doctors.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        mainmain();
    }

    while (fscanf(file, "%s\t%s\t%s\t%s\n", doctors[numDoctors].name, doctors[numDoctors].specialist, doctors[numDoctors].city, doctors[numDoctors].phone) == 4) {
        numDoctors++;
    }

    fclose(file);
}

void displayDoctorsByCity(const char *city) {
    int i;
    
    for (i = 0; i < numDoctors; i ++)
	{
        if (strcmp(doctors[i].city, city) == 0)
		{
            printf("\tDoctor Name 	: %s\n", doctors[i].name);
            printf("\tSpecialist  	: %s\n",doctors[i].specialist);
            printf("\tCity 		: %s\n", doctors[i].city);
            printf("\tPhone 		: %s\n", doctors[i].phone);
            printf("\n");
            
        }
        
        
    }
   
   
        
}

void doctor_main() {
    char city[MAX_LINE_LENGTH];

    // Load doctors from file
    loadDoctorsFromFile("credential.txt");

    // Ask for city name
    printf("\n\tEnter City Name To Search For Doctors : ");
    scanf("%s", city);
    
    system("CLS");
    doctor_design();
    printf("\n\tDoctors in %s :\n\n", city);
    displayDoctorsByCity(city);

}
    
#endif