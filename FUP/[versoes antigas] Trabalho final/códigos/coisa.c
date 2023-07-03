#include<stdio.h>

int main() {
	
	int tres = 0, nove = 0, i, j;
	
	for(i = 1; i < 1000; i++) {
		tres += 3 * i;
		if(tres > 1000) return 0;
	}
	printf("%d", tres);
}
