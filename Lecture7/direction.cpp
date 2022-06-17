#include<iostream>
using namespace std;
int main(){
	char ch;
	 // cin>>ch;//'S'
	ch=cin.get();
	 int x=0,y=0;

// loop
	 while(ch!='\n'){
	 	 if(ch=='E'){
	 	x++;

	 }
	 else if(ch=='W'){
	 	x--;
	 }
	 else if(ch=='N'){
	 	y++;

	 }
	 else{
	 	y--;
	 }
	 // cin>>ch;
	 ch=cin.get();


	 }
	 cout<<x<<" "<<y<<endl;

	 // ist quadrant
	 if(x>=0 and y>=0){
	 	// mai ist quadrant mai hun
	 	for(int c=1;c<=x;c++){
	 		cout<<'E';
	 	}
	 	for(int d=1;d<=y;d++){
	 		cout<<'N';
	 	}

	 }
	 // 2nd quadrant
	 else if(x<=0 and y>=0){
	 	// mai 2nd quadrant mai hun
	 	for(int c=1;c<=y;c++){
	 		cout<<'N';

	 	}
	 	for(int k=1;k<=abs(x);k++){
	 		cout<<'W';
	 	}

	 }
	 else if(x<=0 and y<=0){
	 	// mai 3rd quadrant mai hun
	 	for(int k=1;k<=abs(y);k++){
	 		cout<<'S';

	 	}
	 	for(int d=1;d<=abs(x);d++){
	 		cout<<'W';
	 	}


	 }
	 else{
	 // mai 4th quadrant mai hun
	 	for(int u=1;u<=x;u++){
	 		cout<<'E';

	 	}
	 	for(int c=1;c<=abs(y);c++){
	 		cout<<'S';
	 	}
	 }
	 cout<<endl;
	

	


	return 0;
}