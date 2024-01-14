
n=int(input())
a=[]
for i in range(n):
    a.append(list(map(int, input().split())))
k=int(input())

tmp=0
for i in range(len(a)):
    for j in range(len(a)):
        if j>i: tmp+=a[i][j]
        elif j<i: tmp-=a[i][j]
tmp=abs(tmp)
if tmp<=k: print("YES")
else: print("NO")
print(tmp)

