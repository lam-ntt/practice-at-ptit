#include<bits/stdc++.h>
using namespace std;

struct node{
	int value;
	node* left;
	node* right;
	node(int x){
		value=x;
		left=NULL;
		right=NULL;
	}
};

// Cac thao tac co ban tren cay nhi phan tim kiem
// 1. Them node vao cay nhi phan tim kiem
// 2. Loai bo node tren cay nhi phan tim kiem
// 3. Tim kiem node tren cay nhi phan tim kiem
// 4. Duyet cay theo thu tu truoc
// 5. Duyet cay theo thu tu giua
// 6. Duyet cay theo thu tu sau

void insert(node* &head, int x){
	if(head==NULL) head=new node(x);
	else if(head->value<=x) insert(head->right, x);
	else insert(head->left, x);
}

node* remove(node* &head, int x){
	if(head==NULL) return head;
	else if(head->value==x){
		if(head->left==NULL||head->right==NULL){
			delete(head);
			return NULL;
		}else if(head->left!=NULL||head->right!=NULL){
			node* p=head->right->left;
			head->value=p->value;
			head->right->left=NULL;
			delete(p);
		}else if(head->left==NULL){
			node* p=head->right;
			delete(head);
			return p;
		}else if(head->right==NULL){
			node* p=head->left;
			delete(head);
			return p;
		}
	}else{
		if(head->value>x) head->left=remove(head->left, x);
		else head->right=remove(head->right, x);
		return head;
	}
}

bool search(node* head, int x){
	if(head==NULL) return 0;
	if(head->value==x) return 1;
	if(head->value>x) return search(head->left, x);
	else return search(head->right, x);
}

void inorder(node* head){
	if(head==NULL) return;
	cout << head->value << " ";
	inorder(head->left);
	inorder(head->right);
}

void preorder(node* head){
	if(head==NULL) return;
	preorder(head->left);
	cout << head->value << " ";
	preorder(head->right);
}

void postorder(node* head){
	if(head==NULL) return;
	postorder(head->right);
	postorder(head->left);
	cout << head->value << " ";
}


int main(){
	node* p=NULL;
	insert(p, 5);
	insert(p, 3); insert(p, 1); insert(p, 4);
	insert(p, 8); insert(p, 6); insert(p, 9);
	
	preorder(p);
	cout << "\n";
	remove(p, 5); 
	preorder(p);
	
	return 0;
}
