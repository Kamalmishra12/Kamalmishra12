#include<iostream>
using namespace std;
int main(){
	int process,n;
	cout<< "Number of process :";
	cin>>n;
	int arr[n];
	cout << "enter burst time of processes "<<endl;
	for (int i=0;i<n;i++){
		cout<<"P"<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"waiting times of processes :"<<endl;
	cout<<"P"<<"1"<<":"<<"0"<<endl;
	for(int k=0;k<n-1;k++){
		int sum = 0;
		sum = sum + arr[k];
	cout<<"P"<<k+2<<":"<<sum<<endl;	
	}
	return 0;
	
}