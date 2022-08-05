#include<iostream>
using namespace std;

void permuattion(char inpu[],int i){//3
	// base case
	if(inpu[i]=='\0'){

		cout<<inpu<<endl;
		return;

	}

	// recursive case
	for(int j=i;inpu[j]!='\0';j++){
		swap(inpu[i],inpu[j]);
	permuattion(inpu,i+1);
	swap(inpu[i],inpu[j]);



	}
	


}

int main(){

	char inpu[100];
	cin>>inpu;//"abc"
	permuattion(inpu,0);

	

	return 0;
}