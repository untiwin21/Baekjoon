int main(){
  int N;
  scanf("%d", &N);
  int f=N;
  for(int i=N-1; i>=1; i--){
	  f=f*i;
	}
	if(f==0)
		f=1;
	printf("%d", f);
  return 0;
}
