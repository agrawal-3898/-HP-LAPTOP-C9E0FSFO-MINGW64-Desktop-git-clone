#include<stdio.h> 
void sumpro( int a , int b); 
int main()
{
    auto int d; // auto indicates local variable 
    int c; // local variable ( auto optional ) 
    // if not initialized then it contains garbage 
    /*
        variable declared inside the function are called as local variables 
    */
    //printf("%d ",c); // garbage    
    
    int a =10 , b = 3; 
//a,b,c,d will be created when main is called 
//on main's FAR    
    {
            int c = 10; 
            printf("c = %d\n",c); //10 
            {
                int c = 100; 
                printf("c = %d\n",c);//100 
                {
                    int c = 500; 
                    printf("c = %d\n",c);//500 
                }
            }   
    }    
    //sumpro(a,b); 
    //printf("\n inside main  %d %d",a,b); // 10 3  
    return 0;
}
void sumpro( int a , int b)
{
  //a,b,ps,pp will be created when sumpro is called 
  // on sumpro's FAR   
    int ps,pp;

    ps = a + b; //10 + 3 => 13 
    pp = a * b; // 10 * 3 => 30 
    printf("\nsum = %d prod = %d",ps,pp);  
    a++; 
    b++; 
    /*
        changes made in a and b doesn't reflect in main 
        because main's a and b are different 
    */
   // a,b,ps,pp will be destroyed 
}


/*
        int main( )
        {
            int c = 100; 
            {
                {
                    {
                        {
                            printf("%d ",c); //100 
                        }
                    }
                }
            }
            return 0; 
        }


        
        int main( )
        {
            
            printf("%d ",c); //compiler error 
            {
                {
                    {
                        {
                            int c = 100; 
                        }
                    }
                }
            }
            return 0; 
        }


*/