#include <iostream>
using namespace std;
// int fact(int a);

int fact(int a){
	// int n;
	// cin>>n;//5
	int ans=1;


	for(int i=a;i>0;i--){
		ans=ans*i;//1*5-->5*4-->20*3-->60*2-->120*1-->120

	}
	return ans;


	// cout<<ans<<endl;

}


int ncr(int n,int r){
	int fans=fact(n)/(fact(r)*fact(n-r));
	// cout<<fans<<endl;
	return fans;
}

int main(){
	int n,r;
	cin>>n>>r;//5 2 
	cout<<ncr(n,r)<<endl;

	
	

	
	return 0;
}