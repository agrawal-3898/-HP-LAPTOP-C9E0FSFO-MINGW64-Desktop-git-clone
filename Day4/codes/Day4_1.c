#include<stdio.h> 
int main()
{   
    int number = 3; 
    enum color  //created the datatype 
    {
         RED,BLUE,GREEN,BLACK  
        //RED=1,BLUE,GREEN,BLACK  
        //RED=1,BLUE=2,GREEN=3,BLACK=4  
        //RED=11,BLUE=1,GREEN=3,BLACK  
        //RED='A',BLUE,GREEN=-1,BLACK  
        //RED=1,BLUE,GREEN=1,BLACK  
        //RED=1.5,BLUE,GREEN=1,BLACK // NOT OK   
        //RED=number,BLUE,GREEN=1,BLACK // NOT OK 
        //RED,BLUE,GREEN,black    
        //RED,BLUE,GREEN,RED    
    };
    //printf("%d ",RED); //0  
    
    // int x; // datatype variable-name 
    enum color c1,c2,c3,c4; // variable-name 
    //c1 = RED; 
    //printf("%d",c1); //0 
    //c1++;  
    //printf("%d",c1); //1 
    //RED++; //0++ => 0 = 0 + 1 
    printf("%d ",sizeof(enum color)); // 4 byte 
    return 0;
}
// int main()
// {
//     enum color  //created the datatype 
//     {
//         RED,BLUE,GREEN,BLACK  
//     };
//     //printf("%d ",RED); //0  
    
//     // int x; // datatype variable-name 
//     enum color c1,c2,c3,c4; // variable-name 
//     //c1 = RED; 
//     //printf("%d",c1); //0 
//     //c1++;  
//     //printf("%d",c1); //1 
//     //RED++; //0++ => 0 = 0 + 1 
//     printf("%d ",sizeof(enum color)); // 4 byte 
//     return 0;
// }
/*
        enum IPL
        {
            MI , CSK , RR 
        }; 
        
*/