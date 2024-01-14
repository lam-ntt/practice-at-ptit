
n, m=map(int, input().split())
a=[]
for i in range(n):
    a.append(list(map(int, input().split())))

if n==m:
    for i in a:
        for j in i:
            print(j, end=" ")
        print()
elif n>m:
    for i in range(n):
        if i%2==0 and i//2<n-m: continue
        for j in range(m):
            print(a[i][j], end=" ")
        print()
else:
    for i in range(n):
        for j in range(m):
            if j%2==1 and (j-1)//2<m-n: continue
            print(a[i][j], end=" ")
        print()
