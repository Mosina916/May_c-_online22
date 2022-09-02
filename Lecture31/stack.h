#include<iostream>
#include<vector>
using namespace std;
// templates
template<typename U>
class stack{
	// vector<int> v;
	// vector<char> v;
	vector<U> v;
	// vector<double> v;
public:
	// push
	// void push(int d){
	// void push(char d){
	void push(U d){
		v.push_back(d);

	}
	// pop
	void pop(){
		v.pop_back();
	}

	// size
	int size(){
		return v.size();
	}

	// top
	// int top(){
	// char top(){
	U top(){
		return v[v.size()-1];
	}

	// empty

	bool empty(){
		// if(v.size()==0){
		// 	return true;
		// }
		// else{
		// 	return false;
		// }

		return v.size()==0;
	}

};