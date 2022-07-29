#include<iostream>
using namespace std;
string moveallxatend(string s){
	// base case
	if(s.length()==0){
		return "";
	}
	// recursive case
	string chotaans=moveallxatend(s.substr(1));//bcdxxx
	char ch=s[0];//'x'
	if(ch=='x'){
		// peeche le jao
		return chotaans+ch;//"bcpxxx"+'x'-->"bcpxxxx"
	}
	else{
		return ch+chotaans;//'a'+"bcdxxx"-->abcdxxx
	}
}

int main(){

	string s="abxcxxd";
	int len=s.length();//7

	cout<<moveallxatend(s)<<endl;



	return 0;
}