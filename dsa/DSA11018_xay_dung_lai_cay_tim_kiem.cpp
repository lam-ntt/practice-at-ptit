#include<bits/stdc++.h>
using namespace std;

struct node{
	int v; 
	node *l, *r;
	node(int x){
		v=x;
		l=NULL, r=NULL;
	}
};

void insert(node* &head, int x){
	if(head==NULL) head=new node(x);
	else if(x<head->v) insert(head->l, x);
	else insert(head->r, x);
}

void preOrder(node* head){
	if(head==NULL) return;
	cout << head->v << " ";
	preOrder(head->l);
	preOrder(head->r);
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int tmp; cin >> tmp;
		node* p=new node(tmp);
		for(int i=2; i<=n; i++){
			cin >> tmp;
			insert(p, tmp);
		}
		preOrder(p);
		cout << "\n";
	}
	return 0;
}
