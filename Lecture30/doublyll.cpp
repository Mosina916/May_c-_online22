#include<iostream>
using namespace std;
class node{
public:
	int d;
	node*f;//self refrential class
	node*b;
	// node n;
	node(int data){
		d=data;
		f=NULL;
		b=NULL;



	}
};

void insertatfront(node*&head,node*&tail,int data){
	node*n=new node(data);
	if(head==NULL){
		// ll khali hai
		head=n;
		tail=n;
	}
	else{
		n->f=head;
		head->b=n;
		head=n;

	}

}

void printll(node*tail){
	node*temp=tail;


// while(temp!=NULL){
// 	cout<<temp->d<<" ";
// 	temp=temp->f;


// }
// while(temp!=NULL){
// 	cout<<temp->d<<" ";
// 	temp=temp->f;


// }
	// backward reverse
	while(temp!=NULL){
	cout<<temp->d<<" ";
	temp=temp->b;


}

}


int main(){
	node*head1=NULL;
	node*tail1=NULL;



	insertatfront(head1,tail1,4);

	insertatfront(head1,tail1,89);
	insertatfront(head1,tail1,19);
	// printll(head1);
	printll(tail1);
	
	

	
	return 0;



	





}