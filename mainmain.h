#ifndef MAINMAIN_H_INCLUDED
#define MAINMAIN_H_INCLUDED

void mainmain()
	{
	
		main_menu();
		printf("\n\n");
		printf("1. Register\n");
		printf("2. Log In\n");
		printf("3. Exit\n");

		int number;
		printf("\n\nEnter Your Choice : ");
		scanf("%d",&number);

		switch (number)
		{

			case 1:
				system("CLS");
				register_design();
				registers();
				break;

			case 2:
				system("CLS");
				login_i_design();
				login();
				break;

			case 3:
				system("CLS");
				exiting_menu();
				exiting();
				exit(0);
				break;
		}
	}
	
#endif