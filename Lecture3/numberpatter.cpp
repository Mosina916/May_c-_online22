#include <iostream>
using namespace std;
int main(){ //start
	int n;
	cin>>n;

	int rowno=1;
	
int startval=1;
// int coun=1;

// ========================
	while(rowno<=n){//6<=5
			int coun=1;	
	// loop
			while(coun<=rowno){//1<=3
				cout<<startval<<" ";
				startval=startval+1;//2


				coun=coun+1;//4

			}

			cout<<endl;
			rowno=rowno+1;//6
	// ========================

	}

	return 0;//end
}