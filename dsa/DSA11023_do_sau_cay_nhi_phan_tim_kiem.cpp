#include<bits/stdc++.h>
using namespace std;

set<int> st;

struct node{
	int v, d; 
	node *l, *r;
	node(int x){
		v=x, d=0;
		l=NULL, r=NULL;
	}
};

void insert(node* &head, int x){
	if(head==NULL) head=new node(x);
	else if(x<head->v) insert(head->l, x);
	else insert(head->r, x);
}

void find(node* head, int depth){
	if(head==NULL) return;
	head->d=depth;
	st.insert(head->d);
	find(head->l, depth+1);
	find(head->r, depth+1);
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
		
		st.clear();
		find(p, 0);
		cout << *st.rbegin() << "\n";
	}
	return 0;
}
