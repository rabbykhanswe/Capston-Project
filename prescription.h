#ifndef PRESCRIPTION_H_INCLUDED
#define PRESCRIPTION_H_INCLUDED
#include <string.h>
#define MAX_LEN 100
#define MAX_LENN 11


typedef struct
{
	char medicine[MAX_LEN];
	float price;
	int quant;
    int daily;
    int days;
    int want;
    int quantity;


}medi;

typedef struct
{
	char medicine[MAX_LEN];
	float price;
	int quant;
    int quantity;
    int med_price;


}medii;


	char name[MAX_LEN];
	float pprice;
	static float total;
	char phn_number[MAX_LENN];
	char filename[MAX_LEN];



void prescription()
    {
        int press;
	    printf("\n\n\tHow many medicine you want to prescript : ");
	    scanf("%d",&press);

	    medi med[press];
	    medii mem[press];


        FILE *file;
        file = fopen("medicine.txt","r");

        if(file==NULL)
        {
    	    printf("Error opening file");
            return;
        }

        else
        {

            for(int i = 0; i<press; i++)
        	    {

				    fscanf(file, "%s %.2f", &name, &pprice);





                    while (fscanf(file, "%s %f", med[i].medicine, &med[i].price) == 2)
                    {

                    printf("\n\n\n\tEnter Medicine %d name			: ",i+1);
                    scanf("%s",&med[i].medicine);

                    //printf(" Pcs");

                    printf("\tEnter Daily Dose (Pcs)                  : ",med[i].daily);
                    scanf("%d",&med[i].daily);
                    //printf(" Pcs");

                    printf("\tEnter Total Days                        : ",med[i].days);
                    scanf("%d",&med[i].days);
                    //printf(" Days");

                    printf("\tEnter Want Days                         : ",med[i].want);
                    scanf("%d",&med[i].want);
                    //printf(" Days");


                    int quantity = med[i].daily*med[i].want;
                    int t_quantity=med[i].daily*med[i].days;
                    int rem_quantity = t_quantity-quantity;


                    printf("\n\tYour Medicine %d Quantity is  \t        : %d",i+1,quantity);


                    if(strcmp(med[i].medicine,name) == 0)
                    {
                        printf("\n\n\t\t\t\t\t\t\tMedicine %d : %s X %d\t\t Price : %.2f Taka\n",i+1,med[i].medicine,quantity,med[i].price*quantity);
                    }

                    if(t_quantity>quantity)
                    {
                       printf("\n\t\t \t Dose is not Fullfill\n",rem_quantity);
                        printf("\t\t   ----- Require more %d Pcs -----\n",rem_quantity);
                    }
                    else
                    {
                        printf("\n\t\t\t\t   ----- Dose Complete -----\n");
                    }


                    total = total + med[i].price*quantity;
                    
                    strcpy(mem[i].medicine, med[i].medicine);
                        	mem[i].price = med[i].price;
                            mem[i].quant = med[i].quant;
                            mem[i].quantity = quantity;

                }
            }

            fclose(file);

    }


        printf("\n\n\n\n\t\t\t\t\t**Total Price** : %.2f Taka\n",total);

        float take;

        printf("\n\t\t\tShope Take	                         : ");
        scanf("%f",&take);
        //printf(" Taka");



        if(take>=total)
			{

        		float provide = take - total;
        		printf("\n\t\t\tShope Provide	                         : %.2f Taka\n",provide);
        		printf("\n\t\t\tPress enter to provide %.2f Taka To The Customer...",provide);
        		getch();
        		printf("\n\n\n\t\t\t**Due**				          : 00.00 Taka\n");


			}

		else if(take<=total)
			{
				float due = total-take;
				printf("\n\n\t\t\t**Due**		                   \t : -%.2f Taka\n",due);

			}

			printf("\n\n\t[1]. Print Memo");
			printf("\n\t[2]. Skip Memo\n");
			int print;
			printf("\n\tEnter Your Choice : ");
			scanf("%d",&print);

			switch(print)
			{
				case 1:
					printf("\tEnter Customer Phone Numer : ");
					scanf("%s",&phn_number);
					printf("\n\n");
					snprintf(filename, sizeof(filename), "%s.txt", phn_number);


					FILE *phn;
					phn = fopen(filename,"w");
					if (phn == NULL)
					{
        				printf("\n\t\tDoesn't Exist'");
        				return;
    				}
					else
					{
						int i;
						time_t current_time;
    					time(&current_time);
						fprintf(phn, "\n\n\t\t%s\n",ctime(&current_time));
						
						for(i = 0; i < press; i++)
						{

        					fprintf(phn, "\t\tMedicine Name : %s\n\t\tMedicine Quantity : %d Pcs\n\t\tTotal %s Price : %.2f Taka\n\n", mem[i].medicine, mem[i].quantity,mem[i].medicine, mem[i].quantity*mem[i].price);
        					
        				}
        				fprintf(phn, "\n\t\tTotal Price : %.2f Taka\n",total);
        				fclose(phn);
    				}

    				break;

    			case 2:
    				system("CLS");
    				homepage();
    				break;

			}


}

#endif
