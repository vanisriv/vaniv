#include<stdio.h>
#include<string.h>

int main()
{
 char a[100];
 int i,n;
 gets(a);
 n=strlen(a);
 for(i=n;i>=0;i--)
  {
      printf("%c",a[i]);
  }
}


