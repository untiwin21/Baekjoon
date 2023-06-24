#include <stdio.h>
#include <math.h>
int num_0(int a){//0의 개수 구하는 함수
	int times=0;
	if(a%10!=0)
		return 0;
	else{
		while(a%10==0){
			times++;
			a=a/10;
		}
		return times;
	}
}

int change(int b){//값이 너무 커지지 않도록 수정해주는 함수
	if(b%10!=0){
		b=b%1000;
		return b;
	}
	else{
		while(b%10==0)
			b=b/10;
		b=b%1000;
		return b;
	}
}
int main(){
	int N;
	scanf("%d", &N);
	int arr[2][501];
	arr[0][0]=1; //0!은 1
	arr[1][0]=0;	//0!에서 0의 개수 0개
	for(int i=0; i<N; i++){
		arr[0][i+1]=arr[0][i]*(i+1);
		arr[1][i+1]=arr[1][i]+num_0(arr[0][i+1]);
		arr[0][i+1]=change(arr[0][i+1]);
	}
	
	printf("%d", arr[1][N]);
	return 0;
	}
