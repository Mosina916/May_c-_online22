#include<iostream>
using namespace std;
void decorder(int n){//0
	// base case stoping condition
	if(n==0){
		
		return;

	}

	// if(n==1){
	// 	cout<<1<<endl;
	// 	return;
	// }

	// rec case
	cout<<n<<" ";//5 4 3 2 1
	decorder(n-1);//


}


void incorder(int n){ //0
	// base case
	if(n==0){
		return;

	}


	// recursive case
	incorder(n-1);//incor(2) 
	cout<<n<<" ";


}
int main(){
	int n;
	cin>>n;//3
	// 3 2 1 -->dec order
	// decorder(n);

	incorder(n);//1 2 3 


	
	return 0;
}