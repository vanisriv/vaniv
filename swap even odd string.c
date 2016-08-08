#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100],temp,b[100];
    int i,j;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        b[i]=a[i];
    }
    
    for(i=0,j=1;i<strlen(a),j<strlen(a)+1;i+=2,j+=2)
    {
        {
          temp=a[i];
          a[i]=b[j];
          b[j]=temp;
          printf("%c%c",a[i],b[j]);
        }
     
    }
    return 0;
}
