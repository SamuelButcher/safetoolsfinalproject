#include <stdio.h>
int main()
{
	char *s;
	s = (char *) malloc(7);
	s = (char *) malloc(5);
	free(s);
	s = (char *) malloc(9);
	return 0;
}