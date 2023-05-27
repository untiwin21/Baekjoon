#include <stdio.h>
#include <string.h>
#define max_size 1000005
char str[max_size];
int main(){
	fgets(str, max_size, stdin);
	//printf("%c %c %c", str[max_size-1], str[max_size-2], str[max_size-3]);
	int times=1;
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]==' ')
			times++;
	}
	if(str[0]==' ')	//문자열이 공백으로 시작하는가?
		times--;
	if(str[strlen(str)-2]==' ')//문자열이 공백으로 끝나는가?	
		times--;
	printf("%d", times);
	return 0;
}
