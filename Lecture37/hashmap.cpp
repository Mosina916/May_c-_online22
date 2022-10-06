#include<iostream>
using namespace std;
class node{
public:
	string fruitname;
	int price;
	node* next;

	node(int p,string f){
		price=p;
		fruitname=f;
		next=NULL;

	}

};

// 1:2
// 2:4

// int *arr=new int[]
class Hashmap{
	node**arr;
	int cs;
	int ts;
public:
	Hashmap(int s=7){
		arr=new node*[s];
		for (int i = 0; i <s; ++i)
		{
			arr[i]=NULL;
		}
		cs=0;
		ts=s;
	}
	
	// (a+b)%c;
	// (a%c+b)%c
	int hashfuntion(string fn){
		int ans=0;
		int mult=1;


		// 2^31-1

		for(int i=0;fn[i]!='\0';i++){

			ans=ans+(fn[i]%ts*mult%ts)%ts;//2^31
			mult=(mult*29)%ts;

		}
		return ans%ts;
		

	}

	void rehashing(){
		node* *oldarr=arr;
		int oldts=ts;
		arr=new node*[2*ts];
		ts=2*ts;//14
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}

		// iterate over the old arr
		// and put old arr elements in new arr
		for (int i = 0; i <oldts; ++i)
		{
			node*head=oldarr[i];
			while(head!=NULL){
					insert(head->fruitname,head->price);
					head=head->next;

			}
		

		}

		// delete[] arrayname;
		delete[]oldarr;








	}

	// insertion
	void insert(string fn,int pr){
		int index=hashfuntion(fn);//5
		node*n=new node(pr,fn);
		n->next=arr[index];
		arr[index]=n;
		cs++;//4
		
		if(cs/(ts*1.0)>0.6){
			rehashing();
		}


	}

	void printhm(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";

			node*head=arr[i];

			while(head!=NULL){
				cout<<"("<<head->fruitname<<","<<head->price<<"), ";
				head=head->next;

			}
			cout<<endl;
			




		}
	}


	// deletion

	// deletion()

	// search

	bool search(string s){
		int index=hashfuntion(s);//5

		node*head=arr[index];

		while(head!=NULL){
			if(head->fruitname==s){
			return true;
		}
		head=head->next;

		}
		return false;
		

	}



};

int main(){
	Hashmap h;
	h.insert("Apple",1300);
	h.insert("kiwi",2490);
	h.insert("kiw",2190);
	h.insert("uwi",920);
	h.insert("tyuwi",290);
	h.insert("kdwi",9430);
	h.insert("kwti",9340);

	h.insert("iw",2190);
	h.insert("ui",920);

	if(h.search("kiwi")){
		cout<<"present"<<endl;
	}
	else{
		cout<<"not present"<<endl;
	}




	h.printhm();




	return 0;
}