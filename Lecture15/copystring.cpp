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
void copy(char b[1000],char a[1000]){
	int i=0;
	int j=0;
	// int l=lengthofarr(a);//5

// loop
	// while(i<=l){
	while(i<=lengthofarr(a)){
		b[j]=a[i];
	
	i++;//5
	j++;//5

	}
	
}

int main(){
	// task is take a no then take a string
	char a[1000];
	cin.getline(a,1000);//"world"

	char b[1000];
	copy(b,a);

	cout<<"value of array a is : "<<a<<endl;
	cout<<"value of array b is : "<<b<<endl;
	




		
	return 0;
}