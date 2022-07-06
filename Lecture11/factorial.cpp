#include <iostream>
using namespace std;
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

int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;

	// 5!-->5*4*3*2*1;-->120
	// int x=fact(n);

	// cout<<fact(n)+100<<endl;


	// fact();
	

	
	return 0;
}