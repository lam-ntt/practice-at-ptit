

n=int(input())
a=list(map(int, input().split()))

a=sorted(a)
res=a[0]+1
for i in range(1, len(a)):
    if a[i]==res: res+=1
    else: break
print(res)
