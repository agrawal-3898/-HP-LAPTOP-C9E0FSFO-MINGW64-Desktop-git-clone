// #include<stdio.h>
// int main( void )
// {
// char i = 48;
// switch (i)//48 
// {
// case '2': printf("SunBeam Karad");break; //case 50: 
// case '1': printf("SunBeam Market Yard");break;//case 49: 
// default : printf("SunBeam IT Park Hinjewadi");
// //case not match default case will be executed 
// }
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// int i=5;
// if (!printf("0"))//if(1)=>if(!1)=>if(0)=>if(false)
// i = 3;
// else
// i = 5;
// printf("%d", i);//5 
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// char check = 'a';//97 
// again:
// if(check)//97 
// {
// switch (check)//97 
// {
// case ('a'=='b' || 1 ) : printf("PG-DAC "); break;//case 1: 
// case 0 && 'b'=='a' : printf("PG-DMC "); break; //case 0: 
// default : printf("PG-DITISS"); break; 
// //no matching case default case will get executed 
// }
// }
// else
// goto again;
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// int x=101,y=202;
// if(!(!x)&& x)//if(!(!101))=>if(!F)=>if(T && T)=>if(T)
// printf("inside if x=%d\n",x);
// else if(!(!x)&& x)
// printf("inside 1st netsed if x=%d\n",x);
// else if(!(!x)&& x)
// printf("inside 2ed netsed if x=%d\n",x);
// else
// printf("inside else y=%d\n",y);
// return 0;
// }

// #include <stdio.h>
// int main( void )
// {
// int num1,num2,num3;
// num1 = 144;
// num2 = 156;
// num3 = printf("%10d",++num1 ) +  ++num2;
// //              10            +   157  
// //                   1 4 5 
// //     - - - - - - - - - -  


// printf(" %d",num3); //167 
// return 0;
// }
#include <stdio.h>
int main(void)
{
int a,b,c;
a=printf("\nPG-DITISS");
printf("%d",a); 
//  a = 10 
//b=printf("\nPG-DMC");
// b = 7 
//c=printf("\nPG-DBDA [%d]",a )+ ++b;
//	    PG-DBDA [10] 
//           13              +  8 
//printf(" %d",c); // 21 
return 0;



}