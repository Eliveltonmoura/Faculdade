#include<stdio.h>

int main() {
	
	float a, b;
	char op;
	
	scanf("%f\n", &a);
	scanf("%f\n", &b);
	scanf("%c", &op);
	
	switch(op) {
		case '-': printf("%.2f", a - b);
			break;
		case '+': printf("%.2f", a + b);
			break;
		case '*': printf("%.2f", a * b);
			break;
		case '/': 
            if(b == 0) printf("invalida");
            else printf("%.2f", a / b);
            break;
            
        default: printf("invalida");
	}
	
	return 0;
}
