#include<iostream>
using namespace std;
int xpowern(int x,int n){//4 0
	// base case
	if(n==0){
		return 1;
	}
	// if(n==1){
	// 	return x;

	// }


	// recursive cASE
	return x*xpowern(x,n-1);//4*xpo(4,-1)
}

int main(){
	int x,n;
	cin>>x>>n;//2 4-->16
	cout<<xpowern(x,n)<<endl;

	


	
	return 0;
}