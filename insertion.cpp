#include<iostream>
using namespace std;

void sort(int* arr,int n){
	for(int i = 1;i<n;i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1]=key;
	}
}

int main(){
	int a[] = {34,3,2312,45,-34,4};
	int n = sizeof(a)/sizeof(int);
	sort(a,n);
	for(int i = 0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}
