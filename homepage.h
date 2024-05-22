#ifndef HOMEPAGE_H_INCLUDED
#define HOMEPAGE_H_INCLUDED
#include<string.h>
#include<conio.h>
#include<unistd.h>
#include<string.h>
#include "loading.h"
#include "opening.h"
#include "menu_design.h"
#include "homepage.h"
#include "add_medicine.h"
#include "ambulance.h"
#include "hospital.h"



void homepage()
{
	system("CLS");

	homepage_menu();
    printf("\n\n\n~~~~~~~~ Our Services ~~~~~~");
	printf("\n\n");
	printf("[1] Prescription\n");
	printf("[2] Medicine Handle\n");
	printf("[3] Searching Option\n");
	printf("[4] About Pharmacy\n");
	printf("[5] Log Out\n");
	printf("[6] Exit");
	printf("\n\nEnter Your Choice : ");

	int opt,option,option4,option1,option2,option3;

	scanf("%d",&option);
	system("CLS");


	switch (option)
	{

	//case 1 start
		case 1:
			prescription_design();
			printf("\n\t[1] Prescription Memo Generator");
			printf("\n\t[2] Memo History\n");
			printf("\n\tEnter Your Choice : ");
			scanf("%d",&opt);

			switch (opt)
			{
				case 1:
					system("CLS");
					memo_design();
					prescription();
					printf("\n\tPress any key to Home Page--->.....");
					getch();
					system("CLS");
					loading_homepage();
					homepage();

					break;


				case 2:
					system("CLS");
					history_design();
					memo_history();
					printf("\n\n\n\tPress any key to Home Page--->.....");
					getch();
					system("CLS");
					loading_homepage();
					homepage();

					break;

			}
			break;
		//case 2 start
		case 2:
			system("CLS");
			medi_design();
			printf("\n\t[1] Search Medicin");
			printf("\n\t[2] Add Medicine");
			//printf("\n\t[3] Delete Medicine\n");

			printf("\n\tEnter Your Choice : ");
			scanf("%d",&option4);
			switch(option4)
			{
				case 1:
					system("CLS");
					search_medicine_design();
					name_main();

					printf("\n\n\n\tPress any key to Home Page--->.....");
					getch();
					system("CLS");
					loading_homepage();
					homepage();

					break;
	

				case 2:
					system("CLS");
					add_medicine_design();
					add_medicine();
					printf("\n\tPress any key to Home Page--->.....");
					getch();
					system("CLS");
					loading_homepage();
					homepage();

					break;

			}


		case 3:

			system("CLS");
			searching_type_design();
			printf("\n\t[1] Search Branch");
			printf("\n\t[2] Search Doctor");
			printf("\n\t[3] Search Ambulance");
			printf("\n\t[4] Search Hospital");
			printf("\n\t[5] Search Salesman\n");
			printf("\n\tEnter Your Choice : ");
			scanf("%d",&option3);

			switch (option3)
			{
				case 1:
					system("CLS");
					branch_design();
					branch_main();




					printf("\n\tPress any key to Home Page--->.....");
					getch();
					system("CLS");
					loading_homepage();
					homepage();

					break;

				case 2:
					system("CLS");
					doctor_design();
					doctor_main();





					printf("\n\tPress any key to Home Page--->.....");
					getch();
					system("CLS");
					loading_homepage();
					homepage();

					break;

				case 3:
					system("CLS");
					ambulance_design();
					ambulance_main();


					printf("\n\tPress any key to Home Page--->.....");
					getch();
					system("CLS");
					loading_homepage();
					homepage();

					break;

				case 4:
					system("CLS");
					hospital_design();
					hospital_main();


					printf("\n\tPress any key to Home Page--->.....");
					getch();
					system("CLS");
					loading_homepage();
					homepage();

					break;

				case 5:

					system("CLS");
					salesman_design();
					printf("\n\t[1] Search By Name");
					printf("\n\t[2] Search By Phone Number\n");
					printf("\n\n\tEnter Your Choice : ");
					scanf("%d",&option2);

					switch (option2)
					{
						case 1:
							system("CLS");
							salesman_design();
							name_salesman_main();


							printf("\n\tPress any key to Home Page--->.....");
							getch();
							system("CLS");
							loading_homepage();
							homepage();

							break;

						case 2:
							system("CLS");
							salesman_design();
							phone_salesman_main();




							printf("\n\tPress any key to Home Page--->.....");
							getch();
							system("CLS");
							loading_homepage();
							homepage();

							break;

					}
					break;


			}
			break;


		case 4:
			system("cls");
			printf("\n\n\n\t\t\t*=*=*=*=*=*=*=---Black Thunder Drug House---=*=*=*=*=*=*=*\n\n\n");
			printf("\t\t\t  Owner           : Golam Md Rabby Khan\n");
			printf("\t\t\t  Address         : Sena Shopping Complex, Savar, Dhaka\n");
			printf("\t\t\t  Phone           : +880 1611 135313\n");
			printf("\t\t\t  Total Salesman  : 03\n");
			printf("\t\t\t  Website         : www.black_thunder_drug_house.com\n\n\n");
			printf("\t\t\t\t--Thank You For Knowing About Us--");



					printf("\n\n\n\n\n\n\n\n\n\t\t\t\tPress any key to Home Page--->.....");
					getch();
					system("CLS");
					loading_homepage();
					homepage();

			break;

		case 5:
				mainmain();
				break;


		case 6:
			system("CLS");
			exiting_menu();
			exiting();

			exit(0);
			break;


	}

}
#endif
