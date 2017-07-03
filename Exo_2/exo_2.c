#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main (void)
{
	 
	srand(time(NULL));
	int random = random=rand()%9+0;
	char tab[10];
	tab[0] = '0';
	tab[1] = '1';
	tab[2] = '2';
	tab[3] = '3';
	tab[4] = '4';
	tab[5] = '5';
	tab[6] = '6';
	tab[7] = '7';
	tab[8] = '8';
	tab[9] = '9';
	
	write(1,&tab[random],1);	



	return(0);
}
