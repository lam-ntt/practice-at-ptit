
t=int(input())
while t!=0:
    s=input()
    ok=1
    for i in s:
        if not(i=='4' or i=='7'): 
            ok=0
            break
    if ok: print("YES")
    else: print("NO")
    t-=1