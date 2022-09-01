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

// push_front
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

// push_back
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

bool cycleispresentornot(node*head){
	node*slow=head;
	node*fast=head;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;
	// cyclic hai 
	if(slow==fast){
		return true;
	}

	}
	return false;

	

}

void createacycle(node*head,node*tail){
	tail->next=head->next->next;
}

// floyd cycle dectection

void breakcycle(node*head){
	// is cycle present or not

	node*prev=NULL;

	node*slow=head;
	node*fast=head;

	while(fast!=NULL and fast->next!=NULL){
		prev=slow;
		slow=slow->next;
	fast=fast->next->next;
	// cyclic hai 
	if(slow==fast){
		// return true;
		break;///line no 137
	}

	}
	slow=head;//

	while(slow!=fast){
		prev=prev->next;
		slow=slow->next;
		fast=fast->next;

	}
	prev->next=NULL;

}

int kthnodefromend(node*head,int k){
	node*x=head;
	node*y=head;

	for(int jump=1;jump<=k-1;jump++){
		y=y->next;
	}

	while(y->next!=NULL){
		x=x->next;
	y=y->next;

	}
	return x->d;
	


}



int main(){
	node*head=NULL;
	node*tail=NULL;
	int n,data;
	cin>>n;//8



	for (int i = 0; i <n; ++i)
	{
		cin>>data;// 1 2 3 4 5 6 7 8
		insertattail(head,tail,data);
	}

	cout<<kthnodefromend(head,3)<<endl;

	// if(cycleispresentornot(head)==true){
	// 	cout<<"cycle is present"<<endl;

	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;
	// }


	// createacycle(head,tail);
	// breakcycle(head);
	// printll(head);

	// if(cycleispresentornot(head)==true){
	// 	cout<<"cycle is present"<<endl;

	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;
	// }

	// printll(head);




	
	
	cout<<endl;
	

	
	return 0;



	





}