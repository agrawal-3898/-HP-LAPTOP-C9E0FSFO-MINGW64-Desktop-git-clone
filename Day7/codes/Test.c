// #include <stdio.h>
// int main(void)
// {
// int a[10]={11,22,33,44,55};
// int *ptr=&a[4];
// printf("%d %d", ptr[-1], ptr[-3]);
// //                  44     22 
// return 0;
// }

// #include <stdio.h>
// // note: consider 64 bit compiler
// void print(int arr[]) // arr => pointer 
// {
// int n = sizeof(arr)/sizeof(arr[0]); // 8 / 4 => 2 
// int i;
// for (i = 0; i < n; i++) //0<2=> 11,22  
// printf("%d ", arr[i]);
// return;
// }
// int main( void )
// {
// int arr[] = {11, 22, 33, 44, 55, 66, 77, 88};
// print(arr); // base address 
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main( void )
// {
// char *str = "hello,\tSunbeam\n\0Karad Pune";
// printf("%d", strlen(str));//15 
// return 0;
// }

#include<stdio.h>
int main( void )
{
printf("Sunbeam IT Park Hinjewadi"+8);
//      _format + 8 
//         100 + 8  
//         100 + 8 * 1 
//         108   
return 0;
}
