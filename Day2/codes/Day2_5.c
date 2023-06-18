// #include<stdio.h> 
// int main( )
// {
//     printf("%d ",sizeof(10.33)); // double => 8 bytes 
//     printf("%d ",sizeof(10.33f)); // float => 4 bytes
//     printf("%d ",sizeof(10.33F)); // float => 4 bytes  
//     return 0; 
// }
// #include<stdio.h> 
// int main( )
// {
//     int x; 
//     printf("Enter the number"); 
//     scanf("%d",&x); // & => address of operator 
//     printf("%d ",x); 
//     return 0; 
// }

// #include<stdio.h> 
// int main( )
// {
//     int num1 , num2; 
//     printf("Enter the num1 and num2"); 
//     //scanf("%d",&num1);
//     //scanf("%d",&num2);
//     scanf("%d%d",&num1,&num2); 
//     printf("%d %d",num1,num2);  
//     return 0; 
// }
#include<stdio.h> 
int main( )
{
    char ch; 
    printf("Enter the character");
    scanf("%*c%c",&ch); 
    printf("%c",ch); 
    return 0; 
}