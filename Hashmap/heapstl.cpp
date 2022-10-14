#include<iostream>
#include<queue>
using namespace std;

bool mycomp(int a,int b){ //1 5
	// return a>b;

	return a<b;

}

int main(){

	// priority_queue <int> h;//max heap -->by default
	priority_queue <int,vector<int>,greater<int> > h;//min heap
	


	// h.push(36);
	// h.push(7);
	// h.push(25);
	// h.push(100);
	// h.push(2);

	// while(!h.empty()){
	// 	cout<<h.top()<<" ";
	// h.pop();


	// }

	// cout<<endl;


	int arr[]={3,6,5,7,4};
	int n=sizeof(arr)/sizeof(int);
	// sort(arr,arr+n);//increasing 

	sort(arr,arr+n,mycomp);//dec 

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	

	



	return 0;
}