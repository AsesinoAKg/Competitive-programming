#include <stdio.h>  
void swap(int *, int *);
int main()  
{  
    int a = 63;  
    int b = 487;   
    printf("Before swapping a = %d, b = %d\n",a,b); 
    swap(&a,&b);  
    printf("After swapping a = %d, b = %d\n",a,b); 
}  
void swap (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After swapping a = %d, b = %d\n",*a,*b); 
}  