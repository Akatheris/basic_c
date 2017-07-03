#include <stdio.h>
#include <stdlib.h>
int main (void) 
{
	char chaine[]="Salut";
	printf("%d\n",strlen(chaine));
	printf("%d\n",my_strlen(chaine));
	return(0);
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
