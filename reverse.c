#include<stdio.h>
int main()
{
    int n,revi,rev=0;
    scanf("%d",&n);
    do
    {
        revi=n%10;
        rev=(rev*10)+revi;
        n=n/10;
    }while(n>0);
    printf("%d",rev);
    return 0;
}
