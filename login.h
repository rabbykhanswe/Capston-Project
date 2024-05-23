#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

#define MAX_USERS 1000
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

#include "mainmain.h"
#include<string.h>

typedef struct{
    char fname[30];
    char lname[30] ;
    char username[30];
    char password[20];
    char phone[20];

    }User;

    User users[MAX_USERS];
	int num_users = 0;
	char password1[];
	char password2[];
	char ch;
	int i;

void registers(){

	char secret_code[5] = "135313";
	char code[5];
	
	printf("\n\t\t-- A Secret Code To Register Your Account --");
	printf("\n\n\n\tEnter The Secret Code 	: ");

	while((ch = getch()) != 13)
        {
        	code[i] = ch;
        	printf("*");
        	i++;
		}

        code[i] = '\0'; // Null-terminate the password string

        //strcpy(secret_code, code);


	if(strcmp(secret_code,code) == 1)
	{





        if (num_users >= MAX_USERS)
		{
        	printf("Sorry, the maximum number of users has been reached.\n");
        	return;
    	}


        printf("\n\tEnter Your First Name 	: ");
        scanf("%s", users[num_users].fname);

        printf("\n\tEnter Your Last Name 	: ");
        scanf("%s", users[num_users].lname);

        printf("\n\tEnter Your Phone Number : ");
        scanf("%s", users[num_users].phone);

        //fflush(stdin);


        printf("\n\tEnter Your Username 	: ");
        scanf("%s", users[num_users].username);

        printf("\n\tEnter Your Password 	: ");
        int i = 0;
        while((ch = getch()) != 13)
        {
        	password1[i] = ch;
        	printf("*");
        	i++;
		}

        password1[i] = '\0'; // Null-terminate the password string

        strcpy(users[num_users].password, password1);

        //scanf("%s", users[num_users].password);

        FILE *file;

        file = fopen("credential.txt","a");
        if (file == NULL)
		{
        	printf("Error opening file.\n");
        	return;
    	}

        fprintf(file, "%s\t\t%s\n", users[num_users].username, users[num_users].password);
    	fclose(file);

        num_users ++;

        system("CLS");

        printf("\n\n\n\n\n\n\n\t\t\t\t\t\t     .-.    \n");
		printf("\t\t\t\t\t\t   c(O_O)c  \n");
		printf("\t\t\t\t\t\t  ,'.---.`, \n");
		printf("\t\t\t\t\t\t   /|_|_|\  \ \n");
		printf("\t\t\t\t\t\t | \_____/  | \n");
		printf("\t\t\t\t\t\t  . `---' .` \n");
		printf("\t\t\t\t\t\t   `-...-'  \n\n\n");

        printf(" \n \n \n \t\t\t\t\t --- Registration Successful ---");
        printf("\n\n\n\n\n\t\t\t\tYour Username will be User Id for Log In Credential");

        printf("\n\n \t\t\t\t      Press any key to Log In................");
        getch();


        system("CLS");
        login_i_design();
        login();
    }
    else
    {
    	int i;
    	for(i=0; i<10000; i++)
    	{
    		printf("\t\tAlert\t\t\n");
    		printf("\tSomeone Want to Do Wrong\t");
		}
		exit(0);


	}

        }


 void login(){

     char username[MAX_USERNAME_LENGTH];
     char password[MAX_PASSWORD_LENGTH];

     int i;
     int nums_user = 0;



	 FILE *file;
     file = fopen("credential.txt","r");
     if(file == NULL)
     {
     	printf("\n\n\nError--");
     	mainmain();
	 }

	 else
	 {

    		while (fscanf(file, "%s\t\t%s\n",users[nums_user].username, users[nums_user].password) == 2)
			{
				nums_user ++;
			}

			printf("\n\t Your User ID  : ");
     		scanf("%s",&username);

     		printf("\n\t Your Password : ");

			while((ch = getch()) != 13)
        	{
        		password2[i] = ch;
        		printf("*");
        		i++;
			}

        	password2[i] = '\0'; // Null-terminate the password string

        	strcpy(password, password2);

			 //scanf("%s",&password);

				for(i=0; i<nums_user; i++)
				{
					if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0)
					{


             			system("CLS");
             			login_menu();

             			printf("\n \n \n \n \n \n \n \n \n \n\t\t\t\t\t\t  --- Log In Successful ---");
             			printf("\n\n\t\t");
						loading_login();

             			//sleep(3);






             			//Here Will be all the function
             			system("CLS");
             			homepage();
             			break;





         			}


				}


             			printf("\n\n\n\n\t\t\t-Wrong User Id & Password-");
             			printf("\n\n\t\t\t\t\t\t\tTry again later...");
             			getch();
            			system("CLS");
             			mainmain();






         		fclose(file);




 	}
 }


 /// @brief

#endif
