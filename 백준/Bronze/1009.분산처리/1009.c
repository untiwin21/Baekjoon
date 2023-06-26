#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int T;
	scanf("%d", &T);
	
	int *set= (int *)malloc(sizeof(int)*T);	
	for(int i=0; i<T; i++){
		set[i]=1;
		int a, b;
		scanf("%d %d", &a, &b);
		a=a%10;
		for(int j=0; j<b; j++){
			if(a==0){
				set[i]=10;
				break;
			}
			else
				set[i]=(set[i]*a)%10;
		}
	}
	for(int i=0; i<T; i++){
		printf("%d\n", set[i]);
	}
	
	
	return 0;
}
