
t=int(input())
while t!=0:
    n=int(input())
    a=list(map(int, input().split()))

    cnt=0
    for i in range(1, n):
        mn=min(a[i], a[i-1])
        mx=max(a[i], a[i-1])
        count=0
        while mx>mn*2:
            count+=1
            mn*=2
        cnt+=count
    print(cnt)
    t-=1

