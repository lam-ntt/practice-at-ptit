
t=int(input())
while t!=0:
    n=int(input())
    x, y, z=map(int, input().split())

    dp=[0 for i in range(n+5)]
    dp[1]=x
    for i in range(2, n+1):
        if i%2==0:
            dp[i]=min(dp[i-1]+x, dp[i//2]+z)
        else:
            dp[i]=min(dp[i-1]+x, y+dp[i//2+1]+z)
    print(dp[n])
    t-=1
