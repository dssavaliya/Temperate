#include<stdio.h>
int main()
{
	int n,s,fd=0,sd=1;
	
	    printf("Enter a Number :");
        scanf("%d",&n);
         
        while(n>fd){
        	printf("%d , ",fd);
        	s = fd +sd;
        	fd = sd;
        	sd =s;
		}
   
   return 0;
}
