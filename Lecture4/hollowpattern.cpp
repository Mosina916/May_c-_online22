#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n; //5
	int rowno=1;
	int countspace=1;

// loop
	while(countspace<=n-1){
		cout<<" ";
		countspace=countspace+1;//2 dusri space print karo
	}

	int countstar=1;
	while(countstar<=n){ //6<=5
		cout<<"*";
		countstar=countstar+1;//6
	}

	cout<<endl;

	rowno=rowno+1; //2
// loop
	while(rowno<=n-1){//5<=4
		// spaces 

	int spaccou=1;

// loop
	while(spaccou<=n-rowno){
		cout<<" ";
		spaccou=spaccou+1;//4

	}
	// 1 star
	cout<<'*';

	// spaces n-2 times 
	int spc=1;
	while(spc<=n-2){
		cout<<" ";
		spc=spc+1;
	}
	cout<<'*'<<endl;
	
	rowno=rowno+1;//5


	}

	// n starts print
	int count=1;
	while(count<=n){
		cout<<"*";
		count=count+1;
	}
	cout<<endl;


	




	









	







	return 0;
}