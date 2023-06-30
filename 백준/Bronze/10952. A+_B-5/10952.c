#include <stdio.h>

int main(){
	int a=1; 
	int b=1;
	scanf("%d %d", &a, &b);
	while((a!=0) ||(b!=0)){
		printf("%d\n", a+b);
		scanf("%d %d", &a, &b);
	}
	
	return 0;
}
