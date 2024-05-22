#ifndef HOSPITAL_H_INCLUDED
#define HOSPITAL_H_INCLUDED
#define MAX_LEN 100
#define MAX_HOS 100

typedef struct{
	char name[MAX_LEN];
	char city[MAX_LEN];
	char phone[MAX_LEN];
}hospital;

hospital hos[MAX_AMB];

int numHos = 0;

void load_hospital(const char *filename)
{
	FILE *file;
	file = fopen("hospital.txt","r");
	
	if(file == NULL)
	{
		printf("Error opening file.");
	}
	
	while(fscanf(file,"%s\t%s\t%s",hos[numHos].name, hos[numHos].city, hos[numHos].phone) == 3)
	{
		numHos ++;
	}
	fclose(file);
	
}


void display_hospital(const char *city)
{
	int i;
	
	for(i = 0; i < numHos; i ++)
	{
		if(strcmp(hos[i].city,city) == 0)
		{
			printf("\tHospital Name			: %s\n",hos[i].name);
			printf("\tHospital Location		: %s\n",hos[i].city);
			printf("\tHospital Phone Number	: %s\n",hos[i].phone);
			printf("\n");
		}
	}
}

void hospital_main()
{
	char city[MAX_LEN];
	
	load_hospital("hospital.txt");
	printf("\n\tEnter City Name To Search For Hospital : ");
	scanf("%s",&city);
	
	system("CLS");
	hospital_design();
	printf("\n\tHospital in %s : \n\n",city);
	display_hospital(city);
}
#endif