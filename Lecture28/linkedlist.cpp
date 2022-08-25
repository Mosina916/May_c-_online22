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
void insertattail(node*&head,node*&tail,int data){
	// if ll is empty
	node*n=new node(data);
	if(head==NULL){
		head=n;
		tail=n;

	}

	// ll is not empty
	else{
		tail->next=n;
		tail=n;
	}
}


void printll(node*head){
	node*temp=head;


while(temp!=NULL){
	cout<<temp->d<<" ";
	temp=temp->next;


}

}
// int lengthofll(node*head){
// 	int co=0;
// 	node*temp=head;

// 	while(temp!=NULL){
// 		co++;
// 	temp=temp->next;

// 	}
// 	return co;


// }

int lengthofllrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}


	// rec case
	return 1+lengthofllrec(head->next);
}
void insertatanypost(node*&head,node*&tail,int data,int position){
	if(position==0){
		insertatfront(head,tail,data);
	}
	// else if(position>=lengthofll(head)){

	else if(position>=lengthofllrec(head)){
		insertattail(head,tail,data);

	}
	else{
		node*temp=head;

		for(int jump=1;jump<=position-1;jump++){
			temp=temp->next;
		}

		node*n=new node(data);
		// temp->next=n;
		n->next=temp->next;
		temp->next=n;


	}
}

void deleteatfront(node*&head,node*&tail){
	// if ll is not present
	if(head==NULL){
		return;
	}
	// if single node in ll
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;

	}
	// multiple nodes

	else{
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;


	}

}

void deleteattail(node*&head,node*&tail){
	// if ll is not present
	if(head==NULL){
		return;
	}
	// if single node in ll
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;

	}
	// multiple nodes

	else{
		
		node*temp=head;
		for(int jump=1;jump<=lengthofllrec(head)-2;jump++){
			temp=temp->next;
		}

		delete tail;
		tail=temp;
		tail->next=NULL;


	}

}


void deleteanypost(node*&head,node*&tail,int position){
	if(position==0){
		deleteatfront(head,tail);
	}
	// else if(position>=lengthofll(head)){

	else if(position>=lengthofllrec(head)-1){
		deleteattail(head,tail);

	}
	else{
		node*temp=head;

		for(int jump=1;jump<=position-1;jump++){
			temp=temp->next;
		}

		node*a=temp->next;
		temp->next=temp->next->next;
		delete a;
		a=NULL;

		


	}
}






int main(){
	node*head=NULL;
	node*tail=NULL;
	insertatfront(head,tail,4);

	insertatfront(head,tail,8);

	insertatfront(head,tail,18);

	insertattail(head,tail,30);
	// printll(head);

	insertatanypost(head,tail,45,0);

	insertatanypost(head,tail,95,3);

	printll(head);
	cout<<endl;

	cout<<lengthofllrec(head)<<endl;

	// deleteatfront(head,tail);
	// deleteattail(head,tail);

	

	deleteanypost(head,tail,2);
	printll(head);
	cout<<endl;

	cout<<lengthofllrec(head)<<endl;


	// f(n);

	return 0;



	





}