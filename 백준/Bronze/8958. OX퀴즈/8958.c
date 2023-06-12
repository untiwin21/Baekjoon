#include <stdio.h>
#include <string.h>

int main(){
	int testnum;
	scanf("%d", &testnum);
	
	char testcase[testnum][81];
	for(int i=0; i<testnum; i++){
		scanf("%s", &testcase[i]);
	}

	
	for(int i=0; i<testnum; i++){
		int score=0;
		int sum=0;
		for(int j=0; testcase[i][j]!='\0'; j++){
			if(testcase[i][j]=='O'){
				score++;
				sum+=score;
			}
			else if(testcase[i][j]=='X'){
				score=0;
			}
		}
		printf("%d\n", sum);
	}
	
	
	return 0;
}
