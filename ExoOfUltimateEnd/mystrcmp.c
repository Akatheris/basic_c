#include <unistd.h>
int my_strlen1(const char str1[])
{
        int i = 0 ;
        while (str1[i] != '\0')
        {
        i++;
        }
        return i;
}
int my_strlen2(const char str2[])
{
        int y=0;
        while(str2[y] != '\0')
{
        y++;
}
        return y;
}
int mystrcmp (const char str1[],const char str2[])
{
        my_strlen1(str1);
        my_strlen2(str2);
        int a = my_strlen1(str1);
        int b = my_strlen2(str2);
        return (a-b);
}
