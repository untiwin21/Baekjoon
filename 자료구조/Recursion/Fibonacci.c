#include <stdio.h>

int fibonacci(int n){
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return fibonacci(n-2)+fibonacci(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		printf("%d ", fibonacci(i));
	return 0;
}
