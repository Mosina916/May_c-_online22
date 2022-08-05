#include<iostream>
using namespace std;

void subsequences(char inpu[],int i,char out[],int j){
	// base case
	if(inpu[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;//"" c b;
		return;
	}


	// recursive case
	// without a

	subsequences(inpu,i+1,out,j);
	

	// with a
	out[j]=inpu[i];
	subsequences(inpu,i+1,out,j+1);



}
int main(){

	char inpu[100];
	cin>>inpu;//"abc"
	char outp[100];
	subsequences(inpu,0,outp,0);




	return 0;
}