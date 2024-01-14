
t=int(input())
while t!=0:
    n, m=map(int, input().split())
    a=list(map(int, input().split()))

    pos=a.index(max(a))
    a=a[:pos]+[m]+a[pos:]

    for i in a:
        if i<0: print(i, end=" ")
    for i in a:
        if i>=0: print(i, end=" ")
    print()
    t-=1