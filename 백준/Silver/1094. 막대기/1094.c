#include <stdio.h>
int times(int target){
	int t=0;
	int n=64;
	while(n>=1){
		if(n>target)
			n=n/2;
		else if(n==target){
			t++;
			break;
		}
		else{
			target-=n;
			t++;
		}
	}
	return t;
}

int main(){
	int tar;
	scanf("%d", &tar);
	
	printf("%d", times(tar));
	return 0;
}
