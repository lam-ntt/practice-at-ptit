

n=int(input())
a=list(map(float, input().split()))

mn, mx=min(a), max(a)
res, cnt=0, n
for i in a:
    if i==mn or i==mx:
        cnt-=1
        continue
    res+=i
res=round(res/cnt, 2)

print(res)

