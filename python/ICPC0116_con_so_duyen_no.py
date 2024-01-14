
t=int(input())
while t!=0:
    n=input()
    if n[:1]==n[len(n)-1:]: print("YES")
    else: print("NO")
    t-=1