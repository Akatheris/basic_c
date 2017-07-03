#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main (void) 
{
	char chaine[]="Salut";
	myputstrww(chaine);

return(0);
}

void myputstrww (char* chaine)
{
	int i = my_strlen(chaine);
	int y = 0 ;
	write(1,&chaine[y],i);
}
int my_strlen(const char* chaine)
{
	int i = 0 ;
	while (chaine[i] != '\0')
	{
	i++;
 	}
  	return i;
 }
