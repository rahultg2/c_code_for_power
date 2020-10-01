#include<stdio.h>
#include<math.h>
#include<stdlib.h> // Extra header
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("%d", pow(a,b));
	return 0;
}
