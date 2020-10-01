#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("%d", pow(a,b));
	return 0;
}