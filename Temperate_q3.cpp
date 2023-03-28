#include<stdio.h>
int main()
{

    int n , count;
    printf("Enter Number :");
    scanf("%d", &n);
 
     
    for(count = 0; n !=0 ; count++)
	{
    	n /=10; 
		 
    }
    printf("Numbers of digits = %d\n",count);     

    return 0;
}
