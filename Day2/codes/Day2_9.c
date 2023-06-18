#include<stdio.h> 
int main()
{
    int a = 1; 
    int b = 2; 
    int c = 3; 
    //a+=b+=c+=1; 
    /*
            c = c + 1 => 3 + 1 => 4 
            b = b + c => 2 + 4 => 6 
            a = a + b => 1 + 6 => 7 

    */
    a = b = c = -3;  
    printf("%d %d %d",a,b,c); 
    return 0; 
} 
// int main( )
// {
//     //assignment opr ( = )
//     // int x=1; 
//     // //x = 1;
//     // //2 = 1; //lvalue error 
//     // //2 + 1 = 3; //lvalue error    
//     // //x = 2 + 1; // OK  
//     // x = x+2;  
//     // printf("%d",x); //3 

//     // int a = 1; 
//     // int b = 2; 
//     // printf("%d ",a); //1 
//     // printf("%d ",a=b);//2  
//     // printf("%d ",a); //2 
    
//     return 0;
// }
// int main( )
// {
//     // (=) => assignment operator 
//     int num = 10; 
//     //short-hand assignment 
//     //num+=2; // num = num + 2 
//     //num-=4; // num = num - 4 
//     //num*=5; // num = num * 5  
//     //num/=2; // num = num / 2  
//      num%=2; // num = num % 2  
//     printf("%d ",num); 
//     return 0; 
// }
/*
        num+=2; // num = num + 2 

        num = +2; (unary + ) 
*/