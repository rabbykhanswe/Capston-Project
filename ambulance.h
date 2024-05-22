#ifndef AMBULANCE_H_INCLUDED
#define AMBULANCE_H_INCLUDED
#define MAX_LEN 100
#define MAX_AMB 100

typedef struct{
	char name[MAX_LEN];
	char city[MAX_LEN];
	char phone[MAX_LEN];
}ambulance;

ambulance amb[MAX_AMB];

int numAmb = 0;

void load_ambulance(const char *filename)
{
	FILE *file;
	file = fopen("ambulance.txt","r");
	
	if(file == NULL)
	{
		printf("Error opening file.");
		mainmain();
	}
	
	while(fscanf(file,"%s\t%s\t%s\n",amb[numAmb].name,amb[numAmb].city, amb[numAmb].phone) == 3)
	{
		numAmb ++;
	}
	fclose(file);
	
}


void display_ambulance(const char *city)
{
	int i;
	
	for(i = 0; i < numAmb; i ++)
	{
		if(strcmp(amb[i].city, city) == 0)
		{
			printf("\tAmbulance Owner Name	: %s\n",amb[i].name);
			printf("\tAmbulance Location	: %s\n",amb[i].city);
			printf("\tOwner Phone Number	: %s\n",amb[i].phone);
			printf("\n");
		}
	}

}

void ambulance_main()
{
	char city[MAX_LEN];
	
	load_ambulance("ambulance.txt");
	printf("\n\tEnter City Name To Search For Ambulance : ");
	scanf("%s",&city);
	
	system("CLS");
	ambulance_design();
	printf("\n\tAmbulance in %s : \n\n",city);
	display_ambulance(city);
}
#endif