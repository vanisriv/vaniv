#include<stdio.h>
int main()
{
    int n;
    int val=1,facto=1;
    scanf("%d",&n);
    while(val<=n)
    {
        facto=facto*val;
        val++;
    }
    printf("%d",facto);
    return 0;
}
