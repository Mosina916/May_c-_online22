#include <iostream>
using namespace std;
int main(){ //start
	int n;
	cin>>n;

	int rowno=1;

// ========================
	while(rowno<=n){//2<=5
			int coun=1;

	// loop
			while(coun<=rowno){
				cout<<"*"<<" ";
				coun=coun+1;//2

			}

			cout<<endl;
			rowno=rowno+1;//3
	// ========================

	}
	return 0;//end
}