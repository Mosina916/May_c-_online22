#include <iostream>
using namespace std;
int main(){
	// int i=1;
	// while(i<=5){
	// 	cout<<i<<" ";
	// 	i++;
	// }

	// int i=1;
	// while(i<=0){
	// 	cout<<i<<" ";
	// 	i++;
	// }


	// do{

	// }
	// while(condition);
	// int i=1; 

	// do{
	// 	cout<<i<<endl;

	// }
	// while(i<=0);


	// reverse a no


	int no;
	cin>>no;//346
	// int no=976;
	int rev=0;


	// while(no>0){
	// 	int ld=no%10;//3
	// 	rev=10*rev+ld;//0+6-->663
	// 	no=no/10;//updation //0

	// }


	for(;no>0;no=no/10){
			int ld=no%10;//3
		rev=10*rev+ld;//0+6-->663

	}
	

	cout<<rev<<endl;



















	return 0;
}