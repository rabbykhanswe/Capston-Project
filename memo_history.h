#ifndef MEMO_HISTORY_H_INCLUDED
#define MEMO_HISTORY_H_INCLUDED
void memo_history()
{
	char phn_number[20];
	char ch;
	char filename[20];
	printf("\n\tEnter Customer Phone Numer : ");
	scanf("%s",&phn_number);
	snprintf(filename, sizeof(filename), "%s.txt", phn_number);


	FILE *phn;
	phn = fopen(filename,"r");
	if (phn == NULL)
	{
        printf("Error opening file");
        return 0;
    }
	else
	{
		while(!feof(phn))
		{
			ch = fgetc(phn);
			printf("%c",ch);
		}
	}
}
#endif