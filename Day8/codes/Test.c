// #include<stdlib.h>
// #define MERGE(x,y) x < y ? x##y(0) : y ;
// int main()
// {
// int ex=2,it=3,a;
// MERGE(ex,it) 
// //ex < it ? ex##it(0) : it ;
// //2  <  3 ? exit(0)
// printf("%d\n",a);
// return 0;
// }

#include <stdio.h>
#include<string.h> 
int main(void)
{
	char dest[] = "Visual basic",src[] = "C++";
	puts(strcpy(&dest[7],src)-7);
	return 0;
}