#include <stdio.h>
#include <stdlib.h>
int max(int arr[], int n){
	int mx= arr[0];
	for(int i=1; i<n; i++){
		if(mx<arr[i])
			mx=arr[i];
	}
	return mx;
}

int min(int arr[], int n){
	int mn=arr[0];
	for(int i=1; i<n; i++){
		if(mn>arr[i])
			mn=arr[i];
	}
	return mn;
}


int main(){
	int n;
	scanf("%d", &n);
	int * arr=(int *)malloc(sizeof(int)*n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("%d %d", min(arr, n), max(arr, n));
	
	return 0;
}
