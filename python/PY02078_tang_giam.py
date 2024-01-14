
t=int(input())
while t!=0:
    n=int(input())
    a, b=[], []
    for i in range(n):
        e, f=map(float, input().split())
        a.append(e)
        b.append(f)

    dp=[1 for _ in range(n)]
    for i in range(1, n):
        for j in range(0, i):
            if a[j]<a[i] and b[j]>b[i]:
                dp[i]=max(dp[i], dp[j]+1)
    print(max(dp))
    t-=1
