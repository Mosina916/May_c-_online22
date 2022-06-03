#include <iostream>
using namespace std;
int main(){ //start
	int no;
	cin>>no;//5433231 
	int digit;
	cin>>digit;//3

	int coun=0;
	// loop
	while(no>0){
		int ld=no%10;//5%10-->5
	if(ld==digit){
		coun=coun+1;//3


	}
	no=no/10;//5433231/10-->543323/10-->54332/10-->5433/10-->543/10-->54/10-->5/10-->0

	}
	cout<<coun<<endl;
	
	return 0;//end
}