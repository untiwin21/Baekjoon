#include <stdio.h>
#include <string.h>
int main(){
	char str[1000000];
	scanf("%[^\n]s", str);
	int times=1;
	for(int i=0; i<1000000;i++){
		if(str[i]==' ')
			times++;
		else if(str[i]=='\0')
			break;
	}
	if(str[0]==' ')
		times--;
	if(str[strlen(str)-1]==' ')
		times--;
	printf("%d", times);
	return 0;
}
