#include <stdio.h>

int main(){
	int num;
	int std;
	int max;
	scanf("%d %d", &num, &std);
	
	int input[num];	//숫자 입력받을 배열
	int output[num][num][num];
	
	for(int i=0; i<num; i++){	//숫자 입력받기
		scanf("%d", &input[i]);
	}
	max=output[0][1][2];
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			for(int k=0; k<num; k++){
				if((i!=j)&&(i!=k)&&(j!=k))
					output[i][j][k]=input[i]+input[j]+input[k];
				else
					output[i][j][k]=-1;
				if((output[i][j][k]<=std) && (max<output[i][j][k]))
					 max=output[i][j][k];
			}
		}
	}
	printf("%d", max);

	return 0;
}
