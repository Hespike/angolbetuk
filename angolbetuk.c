#include<stdio.h>

int main(){
	char cha;
	char chA;

	for (cha = 'a', chA = 'A'; cha <= 'z'; ++cha, ++chA)	{
		printf("%c%c", cha, chA);
	}
printf("\n");
	return 0;
}