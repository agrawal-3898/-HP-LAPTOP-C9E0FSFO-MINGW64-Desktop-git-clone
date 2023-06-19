#include<stdio.h> 
int main()
{
  //loops 
    // int i=1; 
    // while(i<=5) // infinite loop 
    // //while(1<=5)=>while(T)=>while(1)
    // //while(1<=5)=>while(T)=>while(1)
    // //while(1<=5)=>while(T)=>while(1)
    // //while(1<=5)=>while(T)=>while(1)
    // //while(1<=5)=>while(T)=>while(1)
    // {
    //     printf("Hello"); 
    // }

    // int i=1; 
    // while(i<=5) 
    // {
    //     printf("Hello "); 
    //     i++; 
    //     //++i; 
    //     //i = i+1; 
    //     //i+=1; 
    // }
    // printf("\n outside the loop %d",i); //6 

    // int i=1; 
    // while(i<=5) 
    // {
    //     printf("%d ",i); //1 2 3 4 5     
    //     i++;     
    // }
    // printf("\n outside the loop %d",i); //6 
   
    // int i=1; 
    // while(i<=5) 
    // {
    //     printf("%d ",i++);//1 2 3 4 5    
    // }
    // printf("\n outside the loop %d",i); //6 

    // int i=1; 
    // while(i<=5) 
    // {
    //     printf("%d ",++i);//2 3 4 5 6     
    // }
    // printf("\n outside the loop %d",i); //6 

    // int i=1; 
    // while(i<=5); //infinite loop 
    
    // {
    //     printf("%d ",i);
    // }
    // printf("\n outside the loop %d",i); 

    // int i=1; 
    // while(i++<=5);
    // //while(1++<=5)
    // //while(2++<=5)
    // //while(3++<=5)
    // //while(4++<=5)
    // //while(5++<=5)
    // //while(6++<=5)


    // {
    //     printf("%d ",i); // 7 
    // }
    // printf("\n outside the loop %d",i);//7  

    // int i = 0; 
    // while(i++)
    // {
    //     printf("\n inside the loop %d",i);
    // }
    // printf("\n outside the loop %d",i);

    // while(1) // infinite loop 
    // {
    //     printf("hello world"); 
    // }

    // char ch=0;
    // while(ch < 256) // infinite loop 
    // {
    //     printf("hi"); 
    // }

    // int i = 1 , j = 1; 
    // while(i<=5,j<=10)
    // {
    //     printf("i:%d j:%d\n",i,j);
    //     i++,j++;  
    // }

    int i = 1 , j = 1; 
    while(i<=10,j<=5)
    {
        printf("i:%d j:%d\n",i,j);
        i++,j++;  
    } 
   
    return 0;
}
