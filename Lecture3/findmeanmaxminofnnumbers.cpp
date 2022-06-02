#include <iostream>
using namespace std;
int main(){ //start
	int n;
	cin>>n;//4
	int no;
	cin>>no;//3
	int smallest=no;//3
	int largest=no;//3
	int sum=no;//3

// 2nd no le rahe hai
	int count=1;


// loop
	while(count<=n-1){
		int num;
		cin>>num;//7
	// smallest
	if(num<smallest){
		smallest=num;//-4

	}
	// largest
	if(num>largest){
		largest=num;//7

	}
	
	// mean
	sum=sum+num;//12
	count=count+1;//5

	}

	cout<<"largest is : "<<largest<<endl;
	cout<<"smallest is : "<<smallest<<endl;
	// int mean=sum/n;
	// cout<<"mean is "<<mean<<endl;
	cout<<"mean is "<<sum/n<<endl;//without store



	





	





	return 0;//end
}