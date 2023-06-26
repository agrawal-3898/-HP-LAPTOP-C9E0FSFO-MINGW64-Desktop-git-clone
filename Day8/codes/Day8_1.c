#include<stdio.h> 
#include<string.h> 
struct emp //created the datatype ( blue-print)
{
    int empno; //4
    char name[20];//20 
    double salary; //8 
};
int main()
{
    //local structure 
    struct student
    {
            int rollno; 
            char name[20]; 
    };
    //struct student s1; 
    struct emp e1={1,"Ketan",1000.00}; 
    struct emp e2 = {2,"Aditya"}; 
    struct emp e3; 
    struct emp e4; 
    //e1 => variable / object 
    //printf("%d %s %.2lf",e1.empno,e1.name,e1.salary); 
    
    /*
               int a1; 
               int *p = &a1; 
    */
    
    struct emp *p = &e1; //pointer to a structure 
    // scale factor => 32 bytes  
    //printf("%d %s %.2lf",p->empno,p->name,p->salary); 
    /*
            int x; 
            x = 1; // assignment  
    */
    e3.empno = 3; 
    strcpy(e3.name,"Rahul");
    e3.salary = 2000.00;  
    //printf("%d %s %.2lf",e3.empno,e3.name,e3.salary); 

    /*
            int x; 
            scanf("%d",&x); 
    */
    printf("Enter the empid name and salary"); 
    scanf("%d%s%lf",&e4.empno,e4.name,&e4.salary);
    printf("%d %s %lf",e4.empno,e4.name,e4.salary);  
    return 0;
}
