#ifndef SALESMAN_H_INCLUDED
#define SALESMAN_H_INCLUDED
#include "mainmain.h"
#define MAX_LEN 100
#define MAX_SALESMAN 100


typedef struct{
	char name[MAX_LEN];
	char city[MAX_LEN];
	char phone[MAX_LEN];
}salesman;

salesman man[MAX_SALESMAN];

int numMan = 0;

void load_salesman(const char *filename){
	FILE *file;

	file = fopen("salesman.txt","r");

	if(file == NULL){
		printf("Error openning file.\n");
		mainmain();
	}

	while(fscanf(file,"%s\t%s\t%s\n",man[numMan].name,man[numMan].city,man[numMan].phone) == 3)
	{
		numMan ++;
	}

	fclose(file);
}

void display_name_salesman(const char *name)
{
	int i;

	for(i = 0; i<numMan; i++)
	{
		if(strcmp(man[i].name,name) == 0)
		{
			printf("\tSalesman Name		: %s\n",man[i].name);
			printf("\tSalesman City		: %s\n",man[i].city);
			printf("\tSalesman Phone	: %s\n\n",man[i].phone);
			printf("\n");
		}
	}
}

void display_phone_salesman(const char *phone)
{
	int i;

	for(i = 0; i<numMan; i++)
	{
		if(strcmp(man[i].phone,phone) == 0)
		{
			printf("\tSalesman Name		: %s\n",man[i].name);
			printf("\tSalesman City		: %s\n",man[i].city);
			printf("\tSalesman Phone	: %s\n\n",man[i].phone);
			printf("\n");
		}
	}
}

void name_salesman_main()
{
	char name[MAX_LEN];

	load_salesman("salesman.txt");

	printf("\n\tEnter Salesman Name To Search For Salesman : ");
	scanf("%s",&name);

	system("CLS");
	salesman_design();
	printf("\n\tSalesman %s's Information Below :\n\n",name);
	display_name_salesman(name);
}


void phone_salesman_main()
{
	char phone[MAX_LEN];

	load_salesman("salesman.txt");

	printf("\n\tEnter Salesman Phone Number To Search For Salesman : ");
	scanf("%s",&phone);

	system("CLS");
	salesman_design();
	printf("\n\tSearched Salesman Below :\n\n");
	display_phone_salesman(phone);
}

#endif
