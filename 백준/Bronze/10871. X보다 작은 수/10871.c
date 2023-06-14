#include <stdio.h>

int main(){
	int N, X;
	int arr[N];
	scanf("%d %d", &N, &X);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	int idx=0;
	for(int i=0; i<N; i++){
		if(X>arr[i]){
			idx=i;
			break;
		}
	}
	printf("%d", arr[idx]);
	for(int i=idx+1; i<N; i++){
		if(X>arr[i])
			printf(" %d", arr[i]);
	}
	return 0;
}
