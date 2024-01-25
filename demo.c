#include <stdio.h>

int main(void)
{
	char j,m,l;
	int age;
	
	printf("input your initials followed by your age: ");
	scanf("%c %c %c %d", &j, &m, &l, &age); 	
	printf("My initials are: %c%c%c and my age is %d.\n", j,m,l,age);
	return(0);
}
