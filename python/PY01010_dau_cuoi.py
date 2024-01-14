
t=int(input())
while t!=0:
    s=input()
    if s[:2]==s[len(s)-2:]: print("YES")
    else: print("NO")
    t-=1

