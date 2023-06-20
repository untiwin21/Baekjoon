#include <stdio.h>
#include <math.h>

void min_dist(int a, int b, int c, int d){
	
	int arr[4];
	arr[0]=a;
	arr[1]=b;
	arr[2]=c-a;
	arr[3]=d-b;
	
	int min=arr[0];
	for(int i=1; i<4; i++){
		if(min>arr[i])
			min=arr[i];
	}
	printf("%d", min);
}


int main(){
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	min_dist(x, y, w, h);
	
	return 0;
}
