#include <stdio.h>
int discr(int n){
	int t=0;
	for(int i=1; i<=n/2; i++){
		if(n%i==0)
			t++;
		
	}
	
	if(t==1)
		return 1;
	else
		return 0;
}


int main(){
	int t;
	scanf("%d", &t);
	int * arr=(int *)malloc(sizeof(int)*t);
	for(int i=0; i<t; i++){
		scanf("%d", &arr[i]);
	}
	
	int tot=0;
	
	for(int i=0; i<t; i++){
		tot+=discr(arr[i]);
	}
	
	printf("%d", tot);
	free(arr);
	return 0;
}
