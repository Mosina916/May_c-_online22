#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int rowno=1;
	while(rowno<=n){
		// count of character inc print -->n-rowno+1
	int couninc=1;
	char pehlachar='A';

	while(couninc<=n-rowno+1){//6<=5
		// task;
		cout<<pehlachar<<" ";//A B C D E
		couninc=couninc+1;//6
		pehlachar=pehlachar+1;//65+1-->66-->B+1-->C-->D-->E+1-->F

	}

	// value of pehlechar -->F
	pehlachar=pehlachar-1;//F-1-->E


	int countdec=1;
	while(countdec<=n-rowno+1){//2<=5
		// task;
		cout<<pehlachar<<" ";
		// pehlachar=pehlachar-1;//C
		pehlachar--;

		countdec++;//2=3

	}

	cout<<endl;
	rowno++;

	}
	








	return 0;
}