#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include "loading.h"
#include "opening.h"
#include "mainmain.h"
#include "salesman.h"
#include "homepage.h"
#include "menu_design.h"
#include "add_medicine.h"
#include "login.h"
#include "doctors.h"
#include "branch.h"
#include "name_search.h"
#include "ambulance.h"
#include "hospital.h"
#include "prescription.h"
#include "memo_history.h"


int main()
{
	opening();
	sleep(3);
	system("CLS");
	mainmain();
    getch();
}
