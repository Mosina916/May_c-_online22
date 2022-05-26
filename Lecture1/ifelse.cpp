#include<iostream>
using namespace std;
int main(){ //start of program -->comments
	// bool israiningornot=true;
	// int age;
	// cin>>age;//19

	// syntax //agar if
	// if(condition){
	// 	// task
	// }
	// if(age<20){
	// 	cout<<"person is a student"<<endl;
	// }

// syntax
	// if(condition){
	// 	cout<<"person is a student"<<endl;
	// }
	// else{
	// 	// false
	// }

	// if(age<20){
	// 	cout<<"person is a student"<<endl;
	// }
	// else{

	// 	cout<<"person is not a student"<<endl;
	// }


	int marks;
	cin>>marks;



	if(marks>=90 and marks<=100){

	// if(marks>=90<=100){-->wrong
		cout<<"Grade A"<<endl;
	}
	else if(marks>=80 and marks<=89){
		cout<<"Grade B"<<endl;

	}
	// else{

	// }
	else if(marks>=70 and marks<=79){
		cout<<"Grade C"<<endl;
	}
	else if(marks>=60 and marks<=69){
		cout<<"Grade D"<<endl;
	}

	else if(marks>=50 and marks<=59){
		cout<<"Grade E"<<endl;
	}
	else{
		cout<<"fail"<<endl;
	}








	return 0;//end terminate the program
}