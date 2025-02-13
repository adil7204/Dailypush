#include<stdio.h>
#include<conio.h>
int main()
{
	char words[]="one two three four";
	int count = 0;
	char *token = strtok(words," ");
	while(token!=NULL){
	count++;
	token = strtok(NULL," ");
	}
	printf("%d/n",count);
	return 0;
}
