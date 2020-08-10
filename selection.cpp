#include<iostream>
using namespace std;

void sort(int* a,int n){
	for(int i = 0;i<n-1;i++){
		int min = i;
		for(int j = i+1;j<n;j++){
			if(a[min]>a[j]){
				min = j;
			}
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

void print(int x[],int n){
	cout<<"\n";
	for(int i = 0;i<n;i++){
		cout<<x[i]<<"\t";
	}
	cout<<"\n";
}

int main(){
	int a[] = {3,45,-9,343,5};
	int n = sizeof(a)/sizeof(int);
	sort(a,n);
	print(a,n);
	return 0;
}
