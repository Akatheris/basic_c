#include <unistd.h>
int main (void)
{
	char monchar ='A';
	int nombre = 42;
	float decimal = 4.2;
	int nb_tab[8];
		
	nb_tab[0] = 42;
	nb_tab[1] = 42;
	nb_tab[2] = 42;
	nb_tab[3] = 42;
	nb_tab[4] = 42;
	nb_tab[5] = 42;
	nb_tab[6] = 42;
	nb_tab[7] = 42;	
	char char_tab[3];

	char_tab[0] = 'a'"\n";
	char_tab[1] = 'a'"\n";
	char_tab[2] = 'a'"\n";
	write(1,char_tab,4);
	return(0);
}
