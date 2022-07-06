#include <iostream>
using namespace std;

int main(){
	int times;
	cin>>times;//2

	for(int c=1;c<=times;c++){

	int n;
	cin>>n;//12134
	int sumeven=0;
	int sumodd=0;

// loop

	while(n>0){
		int ld=n%10;//12134%10-->4
		
	if(ld%2==0){
		// means even hai
		sumeven=sumeven+ld;//6
	}
	else{
		// odd hai
		sumodd=sumodd+ld;//5
	}
	n=n/10;//0

	}

	if((sumeven%4)==0 ||(sumodd%3)==0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;

	}

	}

	





	
	return 0;
}