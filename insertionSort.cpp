#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	int arr[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i]; 
	}
	//insert current position at correct position
	for(i=1;i<=n-1;i++){
		int curr=arr[i];
		for(j=i-1;j>=0 && arr[j]>curr;j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=curr;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}