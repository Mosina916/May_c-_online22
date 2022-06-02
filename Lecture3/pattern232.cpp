#include <iostream>
using namespace std;
int main(){ //start
	int trows;
	cin>>trows;//5


	int rowno=1;

	while(rowno<=trows){

		// spaces print karne ka kaam
	int spacescou=1;

// loop
	while(spacescou<=trows-rowno){//3<=2
		cout<<'\t';
		spacescou=spacescou+1;//3
	}
	// inc order
	int incou=1;//pehla inc no print ho raha hai
	int startvalin=rowno;//3
	while(incou<=rowno){//2<=1
		// task
		cout<<startvalin<<'\t';//3 4 5 
		startvalin=startvalin+1;//2
		incou=incou+1;//2
	}

	// dec order
	int coupehladec=1;
	int startvaldec=2*rowno-2;//0
	// int startvaldec=startvalin-2;
	while(coupehladec<=rowno-1){//1<=0
		// task
		cout<<startvaldec<<'\t';//4  3
		startvaldec=startvaldec-1;//2
		coupehladec=coupehladec+1;//3
	}

	cout<<endl;
	rowno=rowno+1;//5

	}

	// 2nd half
	


	
	return 0;//end
}