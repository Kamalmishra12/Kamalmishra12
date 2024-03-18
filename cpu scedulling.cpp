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
	/*	for (int j=0;j<n;j++){
		cout <<"process :"<<j+1<<"is";
		cout<<arr[j];
		cout<<endl;
	}
	*/
	return 0;
	
}