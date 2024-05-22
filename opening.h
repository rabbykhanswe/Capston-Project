#ifndef OPENING_H_INCLUDED
#define OPENING_H_INCLUDED


void opening(){
	

char open[] = ">>>";
char end[] = ">>>";
	int lenth1 = sizeof(open);
	int lenth2 = sizeof(end);
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t>>> ");
	int i;
	while(i<lenth1){
		printf("%c",open[i]);
		sleep(1);
		i++;
	}
	
	
	
	
	printf(" O P E N I N G  ");
	int j;
	while(j<lenth2){
		printf("%c",end[j]);
		sleep(1);
		j++;
	}
	
	
	printf(">>>\n\n\t\t\t\t    99%c...",37);
}
#endif
