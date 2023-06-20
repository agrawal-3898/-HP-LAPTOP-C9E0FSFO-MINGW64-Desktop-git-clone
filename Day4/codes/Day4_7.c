#include<stdio.h> 
int fun( ); 
int main()
{
    int x = fun( );    
    printf("%d ",x);//20   
    return 0;
}
int fun( )
{
     return (10,20,30,40); //40 
    //return 10,20,30; //30 
    
    
}
// #include<stdio.h> 
// int fun( ); 
// int main()
// {
//     int x = fun( );    
//     printf("%d ",x);//20   
//     return 0;
// }
// int fun( )
// {
//     return 20;
//     printf("Hello world");  
//     return 10; 
// }
// #include<stdio.h> 
// int fun( ); 
// int main()
// {
//     int x = fun( );    
//     printf("%d ",x); //10 
//     return 0;
// }
// int fun( )
// {
//     return 10; 
// }
