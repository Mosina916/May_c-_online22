#include<iostream>
using namespace std;
class node{
public:
	int d;
	node*next;//self refrential class
	// node n;
	node(int data){
		d=data;
		next=NULL;


	}
};
// support@codingblocks.com
// char arr[]="hello";


void insertatfront(node*&head,node*&tail,int data){
	// int*xptr=new int; int x
	node*n=new node(data);
	// if ll is empty
	if(head==NULL){
		head=n;
		tail=n;
	}
	// ll is not empty
	else{
		n->next=head;
		head=n;

	}


}


void printll(node*head){
	node*temp=head;


while(temp!=NULL){
	cout<<temp->d<<" ";
	temp=temp->next;


}

}

int lengthofllrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}


	// rec case
	return 1+lengthofllrec(head->next);
}


// to find mid point of ll


node* midpointofll(node*head){
	node*slow=head;
	node*fast=head->next;


while(fast!=NULL and fast->next!=NULL){//odd length ka ll ho
	slow=slow->next;
	fast=fast->next->next;

}
return slow;//300 adress return 
	

}


void bubblesort(node*head){
	for(int i=0;i<=lengthofllrec(head)-2;i++){
		for(node*j=head;j->next!=NULL;j=j->next){
			if(j->d>j->next->d){//95>
				swap(j->d,j->next->d);

			}


		}
			

	}

}


// merge two sorted ll using rec

node*mergettwosortedll(node*head1,node*head2){
	// case 1-->l2 khali head2 wo null k barabar 
	if(head2==NULL){
		return head1;
	}

	// case 2-->l1 khali head1 wo null k barabar 
	else if(head1==NULL){
		return head2;
	}
	// both exist
	else{
		node*newhead=NULL;

		if(head1->d<head2->d){//1<2

			newhead=head1;
			newhead->next=mergettwosortedll(head1->next,head2);
			// return newhead;

		}
		else{
			newhead=head2;
			newhead->next=mergettwosortedll(head1,head2->next);
			// return newhead;


		}
		return newhead;
	}


}

node* mergesort(node*head){
	// base case
	// agar ll khali hai
	if(head==NULL){
		return head;
	}

	// agar ll mai ek hi element hai
	if(head->next==NULL){
		return head;


	}
	// recursive case
	// mid
	node*m=midpointofll(head);
	node*temp=m->next;
	m->next=NULL;
	head=mergesort(head);
	temp=mergesort(temp);
	// node*x=mergesort(head);
	// node*y=mergesort(temp);

	node*newhead=mergettwosortedll(head,temp);
	return newhead;


}


int main(){
	node*head1=NULL;
	node*tail1=NULL;

	// node*head2=NULL;
	// node*tail2=NULL;

	insertatfront(head1,tail1,9);
	insertatfront(head1,tail1,4);
	insertatfront(head1,tail1,16);
	insertatfront(head1,tail1,1);
	insertatfront(head1,tail1,8);


	node*newh=mergesort(head1);
	printll(newh);
	cout<<endl;
	// insertatfront(head2,tail2,3);

	// printll(head1);
	// cout<<endl;


	// insertatfront(head2,tail2,8);
	// insertatfront(head2,tail2,3);
	// insertatfront(head2,tail2,2);
	// printll(head2);
	// cout<<endl;

	// node*newh=mergettwosortedll(head1,head2);
	// printll(newh);
	// cout<<endl;

	
	return 0;



	





}