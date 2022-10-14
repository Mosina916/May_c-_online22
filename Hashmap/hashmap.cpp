#include<iostream>
#include<vector>
using namespace std;
// heap sort

class Minheap{
	vector<int> v;
public:

	void heapify(int index){
		int mi=index;//5

		int lc=2*index;//10
		int rc=2*index+1; //11
		if(lc<v.size() and v[mi]>v[lc]){
			mi=lc;//2

		}
		if(rc<v.size() and v[mi]>v[rc]){
			mi=rc;
		}

		// mi index

		if(mi!=index){//base case
			swap(v[mi],v[index]);
			heapify(mi);

		}
		



	}

	Minheap(){
		v.push_back(-9);
	}


	// insertion
	void insert(int data){
		v.push_back(data);
		int child=v.size()-1;
		int parent=child/2;

		while(child >1 and v[child]<v[parent]){
			swap(v[child],v[parent]);
			child=parent;
			parent=child/2;
		}
	}




	// deletion-->delete min

	void deleteinheap(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}


	// search-->find min
	int search(){
		return v[1];
	}

	// \empty
	bool empty(){
		return v.size()==1;
	}
};
int main(){
	Minheap h;
	h.insert(36);
	h.insert(7);
	h.insert(25);
	h.insert(100);
	h.insert(2);
	h.insert(1);
	h.insert(3);
	h.insert(17);
	h.insert(19);

	// h.insert(36);
	// h.insert(7);
	// h.insert(25);
	// h.insert(100);

	// h.insert(0);
	while(!h.empty()){
		cout<<h.search()<<" ";//1 2
	h.deleteinheap();

	}
	




	return 0;
}