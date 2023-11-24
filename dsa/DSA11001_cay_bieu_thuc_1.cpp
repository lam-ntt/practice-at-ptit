#include<bits/stdc++.h>
using namespace std;

struct node{
	char c;
	node *l, *r;
	node(char x){
		c=x;
		l=NULL; r=NULL;
	}
};

void connect(node* &head, node* &left, node* &right){
	head->l=left;
	head->r=right;
}

void inOrder(node* head){
	if(head==NULL) return;
	inOrder(head->l);
	cout << head->c;
	inOrder(head->r);
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<node* > st;
		for(int i=0; i<s.size(); i++){
			if(s[i]>='a'&&s[i]<='z') st.push(new node(s[i]));
			else{
				node* p=st.top(); st.pop();
				node* q=st.top(); st.pop();
				node* tmp=new node(s[i]);
				connect(tmp, q, p);
				st.push(tmp);
			}
		}
		inOrder(st.top()); 
		cout << "\n";
	}
	return 0;
}
