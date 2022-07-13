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
	int n;
	cin>>n;//4
	char a[1000];
	cin.ignore();
	cin.getline(a,1000);//"blocks"
	char largeststring[1000];
	copy(largeststring,a);
	int maxlenofstring=lengthofarr(a);

	char b[1000];


	int c=1;
	// loop
	while(c<=n-1){
			cin.getline(b,1000);//"pen" "elephant" "phone"
	if(lengthofarr(b)>maxlenofstring){//8>6
		copy(largeststring,b);
		maxlenofstring=lengthofarr(b);

	}
	c++;//4

	}


	cout<<"largest string is : "<<largeststring<<endl;
	cout<<"length largest string is : "<<maxlenofstring<<endl;





	



		
	return 0;
}