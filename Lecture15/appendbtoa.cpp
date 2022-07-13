#include <iostream>
using namespace std;
int lengthofarr(char arr[]){
	int i=0;
	int c=0;

// loop
	while(arr[i]!='\0'){
		c++;//5
		i++;//5

	}
	return c;

}

void appendbtoa(char a[1000],char b[1000]){
	int i=lengthofarr(a);//5
	int j=0;

// loop
	while(j<=lengthofarr(b)){
		a[i]=b[j];
	i++;
	j++;

	}	

}
int main(){
	// task is take a no then take a string
	char a[1000];
	cin.getline(a,1000);//"hello"

	char b[1000];
	cin.getline(b,1000);//"world"
	cout<<a<<endl;
	cout<<b<<endl;

	appendbtoa(a,b);

	cout<<a<<endl;
	cout<<b<<endl;
	




		
	return 0;
}