#include <stdio.h>

int assign(int h, int n){
	int floor, room;
	if(n%h==0){
		room=n/h;
		floor=h;
	}
	else{
		room=n/h+1;
		floor=n%h;
	}
	return (floor*100+room);
}

int main(){
	int t;
	scanf("%d", &t);
	int h[t], w[t], n[t], ans[t];
	for(int i=0; i<t; i++){
		scanf("%d %d %d", &h[i], &w[i], &n[i]);
	}
	
	for(int i=0; i<t; i++){
		ans[i]=assign(h[i], n[i]);
	}
	
	
	for(int i=0; i<t; i++){
		printf("%d\n", ans[i]);
	}
	
	
	return 0;
}
