#include <stdio.h>
int dim(int n){
	int times=0;
	int * ptimes=&times;
	int i=0;
	int *pi=&i;
	while(*ptimes<n){
		(*pi)++;
		*ptimes=((*pi)*(*pi+1))/2;
	}
	
	return *pi;
	
}

void where(int dimen, int n){
	int t1, t2;
	int del=n-1-(dimen*(dimen-1))/2;
	if(dimen%2==0){
		t1=1+del; t2=dimen-del;
	}
	else{
		t1=dimen-del; t2=1+del;
	}
	printf("%d/%d", t1, t2);
	return;
}


int main(){
	int x;
	scanf("%d", &x);
	
	int diag=dim(x);
	where(diag, x);
	return 0;
}
