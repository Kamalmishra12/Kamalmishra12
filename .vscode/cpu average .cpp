//wap to implement fcsc algorithum
#include<iostream>
using namespace std;
int main(){
	int process;
	cout<< "Number of process :";
	cin>>process;
	int waiting_t = 0;
	int burst_time[process];
	int total_wt=0;
	cout << "enter burst time of processes "<<endl;
	for (int i=0;i<process;i++){
		cout<<"P"<<i+1<<":";
		cin>>burst_time[i];
	}
	cout<<"waiting times of processes :"<<endl;
	cout<<"P"<<"1"<<":"<<"0"<<endl;
	for(int k=0;k<process-1;k++){
	
		waiting_t= waiting_t + burst_time[k];
	cout<<"P"<<k+2<<":"<<waiting_t<<endl;
	total_wt=total_wt+waiting_t;
			
	}
	//average waiting time
	float average_wt=total_wt/process;
	cout<<endl<<"average waiting time of "<<process<<" processes is "<<average_wt;
    //turn around time 
    int turn_around_t=0;
    for(int i=0;i<process;i++)
    turn_around_t
	
	
	return 0;
	
}