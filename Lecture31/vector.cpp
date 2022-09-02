#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	if(v.empty()){
		cout<<"vector is empty"<<endl;
	}
	else{
		cout<<"vector is not empty"<<endl;
	}
	v.push_back(5);//
	v.push_back(15);//
	v.push_back(35);
	v.push_back(40);
	v.push_back(60);
	v.push_back(70);
	v.insert(v.begin(),89);
	if(v.empty()){
		cout<<"vector is empty"<<endl;
	}
	else{
		cout<<"vector is not empty"<<endl;
	}

	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;

	cout<<v.max_size()<<endl;

	// print
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}

	cout<<endl;

	// for(int i=0)

	// print 2nd way
	  for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";








	return 0;
}