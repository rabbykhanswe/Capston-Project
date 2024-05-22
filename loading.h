#ifndef LOADING_H_INCLUDED
#define LOADING_H_INCLUDED

void loading(){
	
	printf("\n\n\t\t\tLoading ");
	int i;
	while(i<10){
		printf("%c",178);
		sleep(1);
		i++;
	}
	printf("\n");
}

void loading_login(){
	
	printf("\t\t\t\t\t");
	int i;
	while(i<3){
		printf("%c",178);
		sleep(1);
		i++;
	}
	printf("%c%c%c%c%c",178,178,178,178,178);
	sleep(1);
	printf("%c",178);
	printf("\n");
}

void loading_homepage(){
	
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ");
	int i;
	while(i<5){
		printf("%c",178);
		sleep(1);
		i++;
	}
	printf("\n");
}


void exiting(){
	
	printf("\n\n\t\t\tExiting ");
	int i;
	while(i<4){
		printf("%c",178);
		sleep(1);
		i++;
	}
	printf("%c%c%c%c",178,178,178,178);
	sleep(1);
	printf("%c",178);
	printf("\n");
}

#endif
