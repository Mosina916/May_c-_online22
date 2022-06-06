#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int d=b*b-(4*a*c);
	if(d>0){
		int r1=(-b+sqrt(d))/(2*a);
		int r2=(-b-sqrt(d))/(2*a);
		cout<<"Real and Distinct"<<endl;
		// // int
		// if(r1<r2){

		// } 
		cout<<min(r1,r2)<<" "<<max(r1,r2)<<endl;

	}
	else if(d==0){
		int r1=(-b+sqrt(d))/(2*a);
		// int r2=(-b-sqrt(d))/(2*a);
		cout<<"Real and Equal"<<endl;
		cout<<r1<<" "<<r1<<endl;

	}
	else{
		cout<<"Imaginary"<<endl;

	}

	// while(){
	// 	cin>>n;
		

	// }
	




	
	// return 0;
	// exit 0
}