#include<stdio.h>
int main()
{
    int choice = 1; 

    switch(  choice ) //1 
    {
         
       case 12 || 13:  // case 1: 
       //case 12 || case 13: // NOT OK   
       printf("one ");
        break; 

        case 2 && 0: // case 0: 
        printf("two ");
        break; 

        case 3:
        printf("three "); 
        break; 

        case 4:      
        printf("four ");
        break; 

       
    }

    return 0;
}

// int main()
// {   
//     int num = 2; 
//     int choice = 56; 
//     switch(  choice ) //1 
//     //switch(  1 ) //1 
//     //switch(2 - 1) // 1 
//     //switch(1.5) // NOT OK 
//     //switch('A') 
//     {

//         case 1:
//         printf("one ");
//         break; 

//         case -2: 
//         //case 3-1:       //case 2: 
//         //case 'A':       //case 65:   
//         //case 1.5:       //NOT OK   
//         //case num: // NOT OK 
//         //case 55: 
//         //case 56: 
//         //case 55: case 56: 
//         printf("two ");
//         break; 

//         case 3:
//         printf("three "); 
//         break; 

//         default: 
//         printf("Invalid"); 
//         break; 


       
//     }

//     // switch(  choice ) //1 
//     // {

//     //     case 1:
//     //     printf("one ");
//     //     break; 

//     //     case 1:  // NOT OK 
//     //     printf("two ");
//     //     break; 

//     //     case 2:
//     //     printf("three "); 
//     //     break; 

//     //     default: 
//     //     printf("Invalid"); 
//     //     break; 


       
//     // }

//     // switch(  choice ) //1 
//     // {

//     //     case 3:
//     //     printf("one ");
//     //     break; 

//     //     case 2: 
//     //     printf("two ");
//     //     break; 

//     //     case 1:
//     //     printf("three "); 
//     //     break; 

//     //     default: 
//     //     printf("Invalid"); 
//     //     break; 


       
//     // }

//     return 0;
// }

// int main()
// {
//     int choice = 55; 

//     switch(  choice ) //1 
//     {
//         default: 
//         printf("Invalid"); 
//         break; 

//         case 1:
//         printf("one ");
//         break; 

//         case 2: 
//         printf("two ");
//         break; 

//         case 3:
//         printf("three "); 
//         break; 

//         case 4:      
//         printf("four ");
//         break; 

       
//     }

//     return 0;
// }

// int main()
// {
//     int choice = 55; 

//     switch(  choice ) //1 
//     {
//         case 1:
//         printf("one ");
//         break; 

//         case 2: 
//         printf("two ");
//         break; 

//         case 3:
//         printf("three "); 
//         break; 

//         case 4:      
//         printf("four ");
//         break; 

//         default: 
//         printf("Invalid"); 
//     }

//     return 0;
// }

// int main()
// {
//     int choice = 4; 

//     switch(  choice ) //1 
//     {
//         case 1:
//         printf("one ");
//         break; 

//         case 2: 
//         printf("two ");
//         break; 

//         case 3:
//         printf("three "); 
//         break; 

//         case 4:      
//         printf("four ");
//     }

//     return 0;
// }
