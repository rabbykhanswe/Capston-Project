#ifndef NAME_SEARCH_H_INCLUDED
#define NAME_SEARCH_H_INCLUDED

#define MAX_LEN 100
#define MAX_NAME 100

typedef struct{
	char name[MAX_LEN];
	char group[MAX_LEN];
	char price[MAX_LEN];
	char quantity[MAX_LEN];
}Name;

Name names[MAX_NAME];

int numName = 0;

void load_name(const char *filename)
{
	FILE *file;
	file = fopen("Medicine.txt","r");
	if( file == NULL)
	{
		printf("Error openning file.");
	}

	while(fscanf(file,"%s\t\t%s\t\t%s\t\t%s\n",names[numName].name,names[numName].group,names[numName].price,names[numName].quantity) == 4)
	{
		numName ++;
	}

	fclose(file);
}

void display_name(const char *name)
{
	int i;

	for(i=0; i<=numName; i++)
	{
		if(strcmp(names[i].name,name) == 0)
		{

			printf("\n\tMedicine Name 	        : %s",names[i].name);
			printf("\n\tMedicine Group  	: %s",names[i].group);
			printf("\n\tMedicine Price  	: %s Taka",names[i].price);
			printf("\n\tMedicine Quantity       : %s Pcs",names[i].quantity);
		}
	}
}

void name_main()
{
	char name[MAX_LEN];

	load_name("Medicine.txt");

	printf("\n\tEnter a Name To Search  For Medicine : ");
	scanf("%s",&name);

	system("CLS");
	search_medicine_design();
	printf("\n\tYour Searched Medicine Below : \n\n");
	display_name(name);

}
#endif