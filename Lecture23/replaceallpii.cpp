#include<iostream>
using namespace std;
string replaceallpi(string s){//"apipiip"
	// base case
	if(s.length()==0){
		return "";
	}
	if(s.length()==1){
		return s;
	}



	// recursive case
	string chotistring=s.substr(0,2);//"ip"
	if(chotistring=="pi"){
		return "3.14"+replaceallpi(s.substr(2));//"3.14"+""-->3.14
	}
	else{
		return s[0]+replaceallpi(s.substr(1));

	}
}

int main(){

	string s="apiixpiip";
	
	cout<<replaceallpi(s)<<endl;



	return 0;
}