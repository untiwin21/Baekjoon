#include <iostream>
using namespace std;
int main(){
  int num;
  cin >> num;

  int arr[num];
  for(int i=0; i<num; i++){
    cin >> arr[i];
  }
  int min=arr[0];
  int max=arr[0];

  for(int i=0;i<num;i++){
    if(min>arr[i])
      min=arr[i];
  }
  for(int i=0;i<num;i++){
    if(max<arr[i])
      max=arr[i];
  }
  cout << min << " " << max;
  
  return 0;
}
