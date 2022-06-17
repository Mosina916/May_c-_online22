#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;//5
	
	int no;
	cin>>no;//2
	int ans=no;//2

	int count=2;

// loop
	while(count<=n){
		cin>>no;//2
	ans=ans^no;//2^6-->4^3-->7^3-->4^2-->6
	count=count+1;//6

	
	// cout<<(count++)<<endl;


	}
	int ans=0;
	int no;

	while(n--){//3
		cin>>no;//6
	ans=ans^no;//0^2-->2^6-->4^3-->7^3-->4^2-->6
	// count=count+1;//6


	}

	cout<<"unique no is : "<<ans<<endl;



	return 0;
}