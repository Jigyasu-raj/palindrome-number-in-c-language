#include<stdio.h>
#include<conio.h>
int main()
{
    int n ,i,rem,reverse=0,actual;
    printf("Enter the number  ");
    scanf("%d",&n);
    actual==n;
    while(n>0)
    {
        rem=n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
    }
    printf("Reverse number  %d",reverse);
        if(actual==reverse)
     {  printf("\nNumber is palindrome");
     }
       else
     {
    printf("\nNumber is not palindrome");
     }
    return 0;
}