#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	scanf("%c",&ch);
	if(isalpha(ch))
	printf("Given chararcter is a alphabet ");
	else 
	printf("Given character is not a alphabet");
	return 0;
}

