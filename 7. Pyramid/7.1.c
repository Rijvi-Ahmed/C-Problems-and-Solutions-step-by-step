/*
	7.1.    
		1
		1 2
		1 2 3
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}