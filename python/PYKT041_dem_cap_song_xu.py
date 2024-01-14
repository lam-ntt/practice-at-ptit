
n=int(input())
a=[]
for i in range(n):
    s=input()
    tmp=[]
    for c in s:
        tmp.append(c)
    a.append(tmp)

row, col=[0 for _ in range(n)], [0 for _ in range(n)]
for i in range(n):
    for j in range(n):
        if a[i][j]=='C':
            row[i]+=1
            col[j]+=1

cnt=0
for i in range(n):
    if row[i]>=2: cnt+=row[i]*(row[i]-1)//2
    if col[i]>=2: cnt+=col[i]*(col[i]-1)//2

print(cnt)