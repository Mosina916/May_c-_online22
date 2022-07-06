#include <iostream>
using namespace std;

int main(){
	int times;
	cin>>times;//3

	for(int c=1;c<=times;c++){

	int countsetbit=0;
		int no;
		cin>>no;//6
		// loop
		while(no>0){

		if((no&1)>0){
			countsetbit++;//2

		}
		no=no>>1;//1>>1-->0

		}
		cout<<countsetbit<<endl;

	}




	

	





	
	return 0;
}