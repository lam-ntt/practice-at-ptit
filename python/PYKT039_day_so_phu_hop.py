
t=int(input())
while t!=0:
    n=int(input())
    a=list(map(int, input().split()))
    b=list(map(int, input().split()))

    a=sorted(a)
    b=sorted(b)

    ok=1
    for i in range(len(a)):
        if a[i]>b[i]:
            ok=0
            break
    if ok: print("YES")
    else: print("NO")
    t-=1
