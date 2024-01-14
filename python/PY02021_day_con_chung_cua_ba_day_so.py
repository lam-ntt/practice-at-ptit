
t=int(input())
while t!=0:
    n, m, o=map(int, input().split())
    a=list(map(int, input().split()))
    b=list(map(int, input().split()))
    c=list(map(int, input().split()))

    i, j, k, ok=0, 0, 0, 0
    while i<n and j<m and k<o:
        if a[i]==b[j] and b[j]==c[k]:
            print(a[i], end=" ")
            i, j, k, ok=i+1, j+1, k+1, 1
        elif a[i]>b[j]: j+=1
        elif a[i]>c[k]: k+=1
        else: i+=1
    if ok: print()
    else: print("NO")
    t-=1
