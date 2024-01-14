

t=int(input())
while t!=0:
    n=int(input())
    a=list(map(int, input().split()))
    b=list(map(int, input().split()))

    a=sorted(a)
    b=sorted(b)

    ok=True
    for i in range(len(a)-1):
        for j in range(i+1, len(a)):
            if a[i]>b[i]: ok=False
    if ok: print("YES")
    else: print("NO")
    t-=1




