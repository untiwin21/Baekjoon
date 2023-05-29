/*

알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
입력: 첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.
출력: 첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/
#include <stdio.h>

int main(){
	char word[1000005];
	fgets(word,1000005 ,stdin);
	int times[2][27]={
		{65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87 ,88 ,89 ,90, 0},
		{0,}	
	};
	for(int i=0; i<1000005; i++){
		if(word[i]=='\0')
			break;
		if((word[i]=='A')||(word[i]=='a'))
			times[1][0]++;
		else if((word[i]=='B')||(word[i]=='b'))
			times[1][1]++;
		else if((word[i]=='C')||(word[i]=='c'))
			times[1][2]++;
		else if((word[i]=='D')||(word[i]=='d'))
			times[1][3]++;
		else if((word[i]=='E')||(word[i]=='e'))
			times[1][4]++;
		else if((word[i]=='F')||(word[i]=='f'))
			times[1][5]++;
		else if((word[i]=='G')||(word[i]=='g'))
			times[1][6]++;
		else if((word[i]=='H')||(word[i]=='h'))
			times[1][7]++;
		else if((word[i]=='I')||(word[i]=='i'))
			times[1][8]++;
		else if((word[i]=='J')||(word[i]=='j'))
			times[1][9]++;
		else if((word[i]=='K')||(word[i]=='k'))
			times[1][10]++;
		else if((word[i]=='L')||(word[i]=='l'))
			times[1][11]++;
		else if((word[i]=='M')||(word[i]=='m'))
			times[1][12]++;
		else if((word[i]=='N')||(word[i]=='n'))
			times[1][13]++;
		else if((word[i]=='O')||(word[i]=='o'))
			times[1][14]++;
		else if((word[i]=='P')||(word[i]=='p'))
			times[1][15]++;
		else if((word[i]=='Q')||(word[i]=='q'))
			times[1][16]++;
		else if((word[i]=='R')||(word[i]=='r'))
			times[1][17]++;
		else if((word[i]=='S')||(word[i]=='s'))
			times[1][18]++;
		else if((word[i]=='T')||(word[i]=='t'))
			times[1][19]++;
		else if((word[i]=='U')||(word[i]=='u'))
			times[1][20]++;
		else if((word[i]=='V')||(word[i]=='v'))
			times[1][21]++;
		else if((word[i]=='W')||(word[i]=='w'))
			times[1][22]++;
		else if((word[i]=='X')||(word[i]=='x'))
			times[1][23]++;
		else if((word[i]=='Y')||(word[i]=='y'))
			times[1][24]++;
		else if((word[i]=='Z')||(word[i]=='z'))
			times[1][25]++;	
	}
	
	int max_times=times[1][0];
	for(int i=0; i<26; i++){	//최고 개수 구하기
		if(max_times<times[1][i])
			max_times=times[1][i];
	}
	
	for(int i=0; i<26; i++){
		if(times[1][i]==max_times){
			times[1][26]++;
			times[0][26]=times[0][i];
		}
		if(times[1][26]==2){
			printf("%c", '?');
			break;
		}
	}
	if(times[1][26]!=2)
		printf("%c", times[0][26]);

	return 0;
}
