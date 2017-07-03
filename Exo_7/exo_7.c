#include <unistd.h>
int my_isnumeric (char c)
{

        int n = c  ;
        if (c>=40 && c<=57 || c == 37 || c==61  )
{
                return(0);
}
        else
{
                return(1);
}
}
                                     




int main (void)
{
	char c='=';
	my_isnumeric(c);
	char r = my_isnumeric(c)+48;

	write(1,&r,1);	

return(0);
}

