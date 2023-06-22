#include<stdio.h>
void fun( int *p )
{
      *p++;  
} 
int main()
{
    int a = 10; 
    printf("inside the main %d \n",a); //10 
    fun( &a ); 
    printf("after call  value in  main %d \n",a);//10   
    return 0;
}

// #include<stdio.h>
// void fun( int *p )
// {
//       ++*p;   
// } 
// int main()
// {
//     int a = 10; 
//     printf("inside the main %d \n",a); //10 
//     fun( &a ); 
//     printf("after call  value in  main %d \n",a);//11  
//     return 0;
// }
