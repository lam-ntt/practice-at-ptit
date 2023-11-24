#include<bits/stdc++.h>
using namespace std;

int ok=0; set<int> st;

struct node{
	int v;
	node *l, *r;
	node(int x){
		v=x;
		l=NULL; r=NULL;
	}
};

node* find(node* &head, int x){
	if(head==NULL) return NULL;
	if(head->v==x) return head;
	node* p=find(head->l, x);
	if(p!=NULL) return p;
	else return find(head->r, x);
}

void inOrder(node* head, string &s){
	if(head==NULL) return;
	inOrder(head->l, s);
	s+=to_string(head->v);
	inOrder(head->r, s);
}

void preOrder(node* head, string &s){
	if(head==NULL) return;
	s+=to_string(head->v);
	preOrder(head->l, s);
	preOrder(head->r, s);
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		node *p1=NULL, *p2=NULL;
		int par, child; char pos;
		for(int i=1; i<=n; i++){
			cin >> par >> child >> pos;
			if(p1==NULL) p1=new node(par);
			node* q=find(p1, par);
			if(pos=='L') q->l=new node(child);
			else q->r=new node(child);
		}
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> par >> child >> pos;
			if(p2==NULL) p2=new node(par);
			node* q=find(p2, par);
			if(pos=='L') q->l=new node(child);
			else q->r=new node(child);
		}
		
		string s1="", s2="";
		inOrder(p1, s1); preOrder(p1, s1); 
		inOrder(p2, s2); preOrder(p2, s2);
		cout << (s1==s2) << "\n";	
	}
	return 0;
}
