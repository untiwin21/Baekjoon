/* 
문제:문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다. S에는 QR Code "alphanumeric" 문자만 들어있다.

QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.

입력: 첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다. 각 테스트 케이스는 반복 횟수 R(1 ≤ R ≤ 8), 문자열 S가 공백으로 구분되어 주어진다. S의 길이는 적어도 1이며, 20글자를 넘지 않는다. 

출력: 각 테스트 케이스에 대해 P를 출력한다.
*/
#include <stdio.h>

int main(){
	int test_num;	//태스트 케이스 개수
	scanf("%d", &test_num);
	
	int rpt[test_num];	//각 케이스마다 반복횟수
	char test_case[test_num][21];	//문자열을 저장할 배열
	for(int i=0; i<test_num; i++){
		scanf("%d %s",&rpt[i], &test_case[i]);	//반복 횟수, 반복 대상 문자열 입력받기
	}
	
	for(int i=0; i<test_num; i++){	//각각의 테스트 케이스를 기준으로 나누기
		for(int j=0; test_case[i][j]!='\0'; j++){	//문자열이 끝날 때까지 각 문자를 반복해서 출력
			for(int k=0; k<rpt[i]; k++){	//주어진 횟수만큼 각각의 문자를 반복
				printf("%c", test_case[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
