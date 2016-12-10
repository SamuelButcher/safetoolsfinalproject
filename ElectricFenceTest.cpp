#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *arr;
	arr = (char *)malloc(sizeof(char)*7);
	strcpy(arr,"samuel is awesome");
	return 0;
}