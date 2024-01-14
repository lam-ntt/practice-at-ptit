
n, k=map(int, input().split())
a=list(map(int, input().split()))
a=sorted(a)

cnt=0
for i in range(1, len(a)):
    if a[i]-a[i-1]>k: cnt+=1
print(cnt+1)
