#include<stdio.h>
#include<string.h>

int check(char s[]){
    char st[1005], j=-1;
    for(int i=0; i<strlen(s); i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st[++j]=s[i];
        }else{
            if(j==-1) return 0;
            else{
                if(s[i]==')'&&st[j]=='(') --j;
                else if(s[i]==']'&&st[j]=='[') --j;
                else if(s[i]=='}'&&st[j]=='{') --j;
                else return 0;
            }
        }
    }
    if(j==-1) return 1;
    return 0;
}

int main(){
    char s[1005]; gets(s);
    printf("%d", check(s));
    return 0;
}