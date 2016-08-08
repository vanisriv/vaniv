#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   int n,x=2;
   int i=4;
   scanf("%d",&n);   
   do
   {
    if(i%2 && i%3)
    {
        x++;
    }
    i++;
   }while(i<n);
   printf("%d",x);
   return 0;
}
