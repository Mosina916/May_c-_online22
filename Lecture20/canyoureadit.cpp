#include<iostream>
using namespace std;

int main(){

	string s;//IAmACompetitiveProgrammer
	getline(cin,s);

	int i=0;
	int j;
	for(j=1; s[j]!='\0';j++){
		if(s[j]>='A' and s[j]<='Z'){
		cout<<s.substr(i,j-i)<<endl;//substr(0,1)
		i=j;
		


	}

	}

	cout<<s.substr(i,j-i)<<endl;


	



	// int i=0;
	// cout<<s[i];//I
	// i++;//1

	// for(;s[i]!='\0';i++){
	// 	if(s[i]>='A' and s[i]<='Z'){
	// 	cout<<endl;
	// 	cout<<s[i];//'A'
	// }
	// else{
	// 	cout<<s[i];//m

	// }
	// }

	// cout<<endl;
	




	





	
	return 0;
}