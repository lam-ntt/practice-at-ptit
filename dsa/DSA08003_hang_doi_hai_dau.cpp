#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; 
	int tmp; deque<int> dq;
	int n; cin >> n;
	while(n--){
		cin >> s;
		if(s=="PUSHFRONT"){
			cin >> tmp; dq.push_front(tmp);
		}else if(s=="PRINTFRONT"){
			if(!dq.empty()) cout << dq.front() << "\n";
			else cout << "NONE\n";
		}else if(s=="POPFRONT"){
			if(!dq.empty()) dq.pop_front();
		}else if(s=="PUSHBACK"){
			cin >> tmp; dq.push_back(tmp);
		}else if(s=="PRINTBACK"){
			if(!dq.empty()) cout << dq.back() << "\n";
			else cout << "NONE\n";
		}else if(s=="POPBACK"){
			if(!dq.empty()) dq.pop_back();
		}
	}
	return 0;
}
