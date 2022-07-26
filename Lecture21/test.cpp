#include <iostream>
using namespace std;
string arr[]={"zero","one","Two","Three","Four","Five","six","seven","Eight","Nine"};
void convertintoreverse(int n){//0
	// base case
	if(n==0){
		return;
	}
	// recursive case
	int ld=n%10;//2048%10-->8. 204%10-->4 20%10-->0. 2%10-->2
	cout<<arr[ld]<<" "; //Eight Four zero Two
	convertintoreverse(n/10);//2048/10-->204/10-->20/10-->2/10-->0
}


// 

void convertforwardorder(int n){//0
	// base case
	if(n==0){
		return;
	}
	// recursive case
	int ld=n%10;//2048%10-->8 4
	convertforwardorder(n/10);//Two zero four
	cout<<arr[ld]<<" ";

}
int main(){
	int n;
	cin>>n;//2048
	// convertintoreverse(n);

	convertforwardorder(n);
	cout<<endl;




	return 0;
}