#include <iostream>
#include<algorithm>
using namespace std;
void multiply(int arr[1000],int &noofplacetoiterate,int notomultiply){
	int carry=0;

	for(int j=0;j<noofplacetoiterate;j++){
		int product=arr[j]*notomultiply+carry;//12
	arr[j]=product%10;
	carry=product/10;//1

	}

	while(carry>0){
		arr[noofplacetoiterate]=carry%10;//1
		carry=carry/10;//0
		noofplacetoiterate++;//2
		

	}
	


}
void factorial(int n){
	int arr[1000]={0};
	arr[0]=1;
	int noofplacetoiterate=1;
	for(int i=1;i<=n;i++){//5
	multiply(arr,noofplacetoiterate,i);
}

for(int k=noofplacetoiterate-1;k>=0;k--){
	cout<<arr[k];
}
cout<<endl;



}
int main(){

	int n;
	cin>>n;//5
	factorial(n);
	return 0;
}
