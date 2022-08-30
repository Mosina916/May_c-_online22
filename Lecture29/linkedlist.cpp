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
// 1 2 3 4 5

// int*ptr=new int;
// delete ptr;
// node*n=new node(data);
// delete n;


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
		temp->next=a->next;
		delete a;
		a=NULL;

		


	}
}



// bool searchinllitervively(node*head,int key){
// 	node*temp=head;
// 	while(temp!=NULL){
// 		if(temp->d==key){
// 		return true;
// 	}
// 	temp=temp->next;

// 	}
// 	return false;
	


// }

bool searchinllrec(node*head,int key){
	// base case
	if(head==NULL){
		return false;
	}


	// rec case
	if(head->d==key){
		return true;
	}
	return searchinllrec(head->next,key);
	


}

// to find mid point of ll
int midpointofll(node*head){
	node*slow=head;
	// node*fast=head;//even k case mai 2nd mid wala deta hai
	node*fast=head->next;//even k case mai ist mid wala deta hai


while(fast!=NULL and fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;

}
return slow->d;
	

}

// node* midpointofll(node*head){
// 	node*slow=head;
// 	node*fast=head;


// while(fast->next!=NULL){//odd length ka ll ho
// 	slow=slow->next;
// 	fast=fast->next->next;

// }
// return slow;//300 adress return 
	

// }


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
	// cout<<midpointofll(head)<<endl;

		bubblesort(head);

		printll(head);
		cout<<endl;
	// cout<<endl;
	// int key;
	// cin>>key;
	// if(searchinllitervively(head,key)==true){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }


	// if(searchinllrec(head,key)==true){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }


	return 0;



	





}