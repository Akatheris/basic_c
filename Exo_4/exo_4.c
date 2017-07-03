#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main (void) 
{

	char chaine[]="Salut";
	myputstr(chaine);




return(0);
}

void myputstr (char* chaine)
{
	int i = 0;
	while(chaine[i]!='\0')
{
	write(1,&chaine[i],1);
	i++;
}



}
