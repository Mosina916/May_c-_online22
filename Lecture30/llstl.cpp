#include<iostream>
#include<list>
using namespace std;

int main(){
	// list<datatype>name;
	list<int> l;
	l.push_back(5);//insert at tail
	l.push_back(15);
	l.push_back(50);
	l.push_back(75);
	l.push_back(95);//l  5 15 50 75 95

	l.push_front(85); // 85 5 15 50 75 95 //insert at head

	cout<<l.front()<<endl;//85 //givees element at front
	cout<<l.back()<<endl; //95

	cout<<l.size()<<endl;//6

	// pop_back();//delete at tail
	// pop_front();//delete at head


	list<int>:: iterator it=l.begin();//starting address of ll 
	l.insert(it,2); // 2 85 5 15 50 75 95 //push front

	cout<<l.front()<<endl;//2
	// it=it+3;
	advance(it,3);////it=it+

	l.insert(it,27);//2 85 5  15 27 50 75 95

	// ll pritn

	cout<<"ll is "<<endl;

	for(it=l.begin();it!=l.end();it++){
		cout<<*it<<" ";

	}
	cout<<endl;

	l.reverse();

	cout<<"ll is "<<endl;

	for(it=l.begin();it!=l.end();it++){
		cout<<*it<<" ";

	}
	cout<<endl;

	 l.sort();

	 cout<<"ll is "<<endl;

	 for(it=l.begin();it!=l.end();it++){
		cout<<*it<<" ";

	}
	cout<<endl;








	

	
	return 0;
}