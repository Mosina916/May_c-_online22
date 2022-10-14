#include<iostream>
#include<queue>
using namespace std;
#define minheap priority_queue<int,vector<int>, greater<int> >
void printheap(minheap h){ //heap are passes by val 
	while(!h.empty()){
		cout<<h.top()<<" ";
	h.pop();


	}

	cout<<endl;


}
int main(){
	 minheap h;

	int k;
	cin>>k;//3
	int count=0;

	int data;


	while(-20){
		cin>>data;//13 1 -3 -2
	if(data==-1){
		// print heap
		printheap(h);
	// 	
	}
	else{

		// count =1;
		if(count<k){
			h.push(data);
			count++;//3

		}
		else{
			if(h.top()<data){
				h.pop();
				h.push(data);
			}

		}


	}


	}
	


	return 0;
}