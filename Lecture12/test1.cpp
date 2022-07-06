#include<iostream>
#include <climits>
#define ll long long int
using namespace std;
int main(){
	ll n;
	cin>>n;


	ll t=n;//8-->1000
	ll c=0;

	while(t>0){
		c++;//4
		t=t>>1;//
	}

	// c-->4

	ll mask=(1<<c)-1;//15
	ll sv=mask-n;


	cout<<sv<<" "<<mask<<endl;



	

	return 0;
}