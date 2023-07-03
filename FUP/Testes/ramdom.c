#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	
	int i;
	
	int mat[0][0];

	srand(time(NULL));
	for(i = 0; i < 1; i++) {
		int a = rand() % 35;
		int b = rand() % 35;
		printf("%d %d", a,b);
	}
		
	return 0;
}
