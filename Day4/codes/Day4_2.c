#include<stdio.h> 
int main()
{
    enum color 
    {
        RED=1,BLUE,GREEN 
    };
    enum color choice; 
    printf("Enter the choice"); 
    scanf("%d",&choice); 
    switch (choice)
    {
        case RED: 
        printf("Red color"); 
        break;
        
        case BLUE: 
        printf("Blue color"); 
        break;
        
        case GREEN: 
        printf("Green color"); 
        break;
    
    
    } 
    return 0;
}

// int main()
// {
//     int choice = 1; 
//     switch (choice)
//     {
//         case 1: 
//         printf("Red color"); 
//         break;
        
//         case 2: 
//         printf("Blue color"); 
//         break;
        
//         case 3: 
//         printf("Green color"); 
//         break;
    
    
//     } 
//     return 0;
// }
