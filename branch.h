#ifndef BRANCH_H_INCLUDED
#define BRANCH_H_INCLUDED
#include "mainmain.h"
#define MAX_LEN 100
#define MAX_BRANCH 100


typedef struct{
	char name[MAX_LEN];
	char city[MAX_LEN];
	char phone[MAX_LEN];
}branch;

branch branchs[MAX_BRANCH];

int numBranch = 0;

void load_branch(const char *filename){
	FILE *file;

	file = fopen("branch.txt","r");

	if(file == NULL){
		printf("Error openning file.\n");
		mainmain();
	}

	while(fscanf(file,"%s\t%s\t%s\n",branchs[numBranch].name,branchs[numBranch].city,branchs[numBranch].phone) == 3)
	{
		numBranch ++;
	}

	fclose(file);
}

void display_branch(const char *city)
{
	int i;

	for(i = 0; i<numBranch; i++)
	{
		if(strcmp(branchs[i].city,city) == 0)
		{
			printf("\tBranch Name	: %s\n",branchs[i].name);
			printf("\tBranch City	: %s\n",branchs[i].city);
			printf("\tBranch Phone	: %s\n\n",branchs[i].phone);
			printf("\n");
		}
	}
}

void branch_main()
{
	char city[MAX_LEN];

	load_branch("branch.txt");

	printf("\n\tEnter City Name To Search For Other Branch : ");
	scanf("%s",&city);

	system("CLS");
	branch_design();
	printf("\n\tBranch in %s :\n\n",city);
	display_branch(city);
}

#endif
