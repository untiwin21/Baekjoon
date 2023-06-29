#include <stdio.h>
#include <stdlib.h>

int digit(int n){
	int times=1;
	while((n/10)!=0){
		times++;
		n=n/10;
	}
	return times;
}

int main(){
	int n=1;
	while(n!=0){
		scanf("%d", &n);
		int * arr=(int *)malloc(sizeof(int)*digit(n));
		int temp=n;
		for(int i=0; i<digit(n); i++){
			arr[i]=temp%10;
			temp=temp/10;
		}
		int first=0; int last=digit(n)-1;
		int no=0;
		while(first<=last){
			if(arr[first]!=arr[last]){
				printf("no\n");
				no++;
				break;
			}
			first++; last--;
		}
		if(no==0 &&(n!=0))
			printf("yes\n");
	}
	return 0;
}
