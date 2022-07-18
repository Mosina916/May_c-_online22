#include <iostream>
using namespace std;
int factofn(int n){//0
	// step 1 base case stoping 
	if(n==0){
		return 1;

	}

	// with storing
	// // step 2 recursive case. assume always gives correct ans
	// int chotaans=fact(n-1);//24


	// // step 3 using step 1 and 2 calculate the ans
	// int finalans=n*chotaans;//5*24-->120
	// return finalans;


	// without storing
	return n*factofn(n-1); //fact(4) fact(3) fact(2) fact(1) fact(0)



}
int main(){
	int n;
	cin>>n;//5
	cout<<factofn(n)<<endl;



	return 0;
}