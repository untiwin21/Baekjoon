#include <stdio.h>

int main(){
  int T;
	scanf("%d", &T);
	int arr[T];
  for(int i=0; i<T; i++){
  	 int a, b;
   	scanf("%d %d", &a, &b);
		arr[i]=a+b;
	}
  for(int i=0; i<T; i++){
    printf("%d", arr[i]);
		printf("\n");
  }
  return 0;
    }
