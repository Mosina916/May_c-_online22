#include <iostream>
using namespace std;

int stringtoint(string s,int len){
	// base case
	if(len==0){
		return 0;

	}



	// recursive case
	char ch=s[len-1];//'1'
	int x=ch-'0';//'1'-'0' 49-48-->1
	int y=stringtoint(s,len-1);//"23"-->23
	return y*10+x;


}

int stringtoint2(string s,int len){//""
	// base case
	if(len==0){
		return 0;

	}
	



	// recursive case
	char ch=s[0];//'2'
	int x=ch-'0';//'2'-'0' 50-48-->2
	int y=stringtoint(s.substr(1),len-1);//"31"-->31
	return x*pow(10,len-1)+y;//2*100+31-->231


}




int main(){
	string s;
	cin>>s;
	// s+10;
	int len=s.length();
	// cout<<stringtoint(s,len)+10<<endl;

	cout<<stringtoint2(s,len)<<endl;

	
	



	return 0;
}