#include<bits/stdc++.h>
using namespace std;

int n, a[1000005];

struct node{
	int v;
	node *l, *r;
	node(int x){
		v=x;
		l=NULL, r=NULL;
	}
};

void insert(node* &head, int left, int right){
	if(left<=right){
		int mid=(left+right)/2;
		head=new node(a[mid]);
		insert(head->l, left, mid-1);
		insert(head->r, mid+1, right);
	}
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
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		
		node* p=NULL;
		insert(p, 0, n-1);
		preOrder(p);
		cout << "\n";
	}
	return 0;
}
