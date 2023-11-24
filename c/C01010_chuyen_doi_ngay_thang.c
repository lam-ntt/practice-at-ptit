#include<stdio.h>

int main(){
	int day; scanf("%d", &day);
	int year=day/365;
	int week=day%365/7;
	day=day-365*year-7*week;
	printf("%d %d %d", year, week, day);
	return 0;
}
