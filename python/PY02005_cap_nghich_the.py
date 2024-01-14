

t=int(input())
a=list(map(int, input().split()))
cnt=0
for i in range(len(a)-1):
    for j in range(i+1, len(a)):
        if a[i]>a[j]: cnt+=1
print(cnt)



