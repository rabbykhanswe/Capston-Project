#ifndef ADD_MEDICINE_H_INCLUDED
#define ADD_MEDICINE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h> 

struct medicine {
    char name[30];
    char group[30];
    float price;
    int quantity;
};

void add_medicine() {
    FILE *file;
    file = fopen("Medicine.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    int n;
    printf("\n\n\tHow many medicines do you want to enter: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("\tInvalid input. Please enter a positive number of medicines.\n");
        fclose(file);
        return;
    }

   
    struct medicine *x = (struct medicine *)malloc(n * sizeof(struct medicine));
    if (x == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("\n\tEnter Medicine %d Name 		: ", i + 1);
        scanf("%s",&x[i].name);

        printf("\tEnter Medicine %d Group Name     : ", i + 1);
        scanf("%s", x[i].group);

        printf("\tEnter Medicine %d Price 		: ", i + 1);
        scanf("%f", &x[i].price);

        printf("\tEnter Medicine %d Quantity       : ", i + 1);
        scanf("%d", &x[i].quantity);

        fprintf(file, "%s\t\t%s\t\t%.2f\t\t%d\n", x[i].name, x[i].group, x[i].price, x[i].quantity);
    }

    free(x);
    fclose(file);
}

#endif
