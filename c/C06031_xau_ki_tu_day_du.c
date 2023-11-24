#include<stdio.h>
#include<string.h>

int main(){
    char s[55]; gets(s);
    int dp[50]={0}, mx=-1;
    for(int i=0; i<strlen(s); i++){
        dp[i]=1;
        for(int j=0; j<i; j++){
            if(s[j]<s[i]&&(dp[j]+1)>dp[i]){
                dp[i]=dp[j]+1;
            }
        }
        if(dp[i]>mx) mx=dp[i];
    }
    printf("%d", 26-mx);
    return 0;
}