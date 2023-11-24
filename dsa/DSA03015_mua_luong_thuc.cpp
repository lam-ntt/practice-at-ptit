#include<bits/stdc++.h>
using namespace std;

int mx, num, mid;

int find(int change, int day, int count){
	if(day==0) return count;
	if(day>=7){
		int unit=7*mid-change;
		int tmp=unit/mx;
		if(unit>tmp*mx) tmp++;
		
		if(tmp>=7) return -1;
		else return find(mx*tmp-unit, day-7, count);
	}else{
		int unit=day*mid-change;
		int tmp=unit/mx;
		if(unit>tmp*mx) tmp++;
		
		if(tmp>day) return -1;
		else return find(mx*tmp-unit, 0, count);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> mx >> num >> mid;
		cout << find(0, num, 0) << "\n";
	}
	return 0;
}
