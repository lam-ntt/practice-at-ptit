#include<bits/stdc++.h>
using namespace std;

int n, a[1005], b[1005];

struct node{
	int v;
	node *l, *r;
	node(int x){
		v=x;
		l=NULL, r=NULL;
	}
};

void postOrder(node* head){
	if(head==NULL) return;
	postOrder(head->l);
	postOrder(head->r);
	cout << head->v << " ";
}

node* connect(int l1, int r1, int l2, int r2){
	if(l1>r1||l2>r2) return NULL;
	node* p=new node(b[l2]);
	if(l1==r1&&l2==r2) return p;
	else{
		int idx=-1;
		for(int i=l1; i<=r1; i++){
			if(a[i]==b[l2]){
				idx=i; 
				break;
			}
		}
		p->l=connect(l1, idx-1, l2+1, l2+idx-l1);
		p->r=connect(idx+1, r1, l2+idx-l1+1, r2);
		return p;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<=n; i++) cin >> a[i];
		for(int i=1; i<=n; i++) cin >> b[i];
		node* p=connect(1, n, 1, n);
		postOrder(p);
		cout << "\n";
	}
	return 0;
}
