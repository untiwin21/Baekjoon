/* 
문제:다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.
입력: 첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.
출력: 첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.
*/
#include <stdio.h>

void dstg(int * arr){
	if(arr[0]==8){
		for(int i=8; i>0; i--){
			if(arr[8-i]==i){
				if(i==1)
					printf("descending");
				continue;
			}
			else{
				printf("mixed");
				break;
			}
		}
	}
	else if(arr[0]==1){
		for(int i=0; i<8; i++){
			if(arr[i]==i+1){
				if(i==7)
					printf("ascending");
				continue;
			}
			else{
				printf("mixed");
				break;
			}
		}
	}
	else
		printf("mixed");
	return;
}

int main(){
	int sound[8];
	scanf("%d %d %d %d %d %d %d %d", &sound[0], &sound[1], &sound[2], &sound[3], &sound[4], &sound[5], &sound[6], &sound[7]);
	dstg(sound);
	return 0;
}
