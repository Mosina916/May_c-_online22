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
void reverse(char a[1000]){
	int i=0;
	int j=lengthofarr(a)-1;//5

// loop
	while(i<j){
			swap(a[i],a[j]);
	i++;
	j--;


	}


}

int main(){
	char a[1000]; 
	cin.getline(a,1000);//"blocks" o/p skcolb
	cout<<"Before reverse : "<<a<<endl;


	reverse(a);

	cout<<"After reverse : "<<a<<endl;
	



	



		
	return 0;
}