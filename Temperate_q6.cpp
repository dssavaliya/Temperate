#include<stdio.h>
int main()
{

    int n,i;
    printf("Enter Number :");
    scanf("%d", &n);
 
    int fact=1;
    for(i=1;i<=n;i++)
    {
    fact = fact*i;
    }
    printf("%d! = %d\n",n,fact);

    return 0;
}
