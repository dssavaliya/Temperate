#include<stdio.h>
int main()
{

    int i,n,reverse = 0;
    printf("Enter Number :");
    scanf("%d", &n);
    int origanal =n;
    
    while(n != 0){
    	
    i = n%10;
	reverse = reverse*10 + i;
	n /=10;
    	
	}
	printf("Reversed Number is %d\n",reverse);
    if(origanal == reverse)
	  {
      printf("Entered Number is Palindrome");
      }
      else
	  {
      printf("Entered Number is Not Palindrome");
      } 
    

    return 0;
}

