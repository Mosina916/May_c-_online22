#include<iostream>
using namespace std;
int main(){
	char ch;
	
	int count=0;
	ch=cin.get();//property space \t \n ignore nahi karta

	// cin>>ch;//'H'
	// loop
	// space agar aarahi tou wo ignore ho rahi hai
	// cin>>ignore space \t,\n

	// 	-->"    ""

	while(ch!='$'){
		count++;//4
		// cin>>ch;//'$'
		ch=cin.get();
	}
	cout<<count<<endl;
	


	return 0;
}