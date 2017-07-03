#include <unistd.h>
int main (void)
{
	char c = 10;
	int n = c - 48 ;
	if (c>=0 && c<=9)
{
		write(1,"0",1);
}
	else 
{
		write(1,"1",1);
}
return(0);
}
