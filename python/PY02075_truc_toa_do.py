
t=int(input())
while t!=0:
    n=int(input())
    a=[]
    for i in range(n):
        a.append(list(map(int, input().split())))
    a=sorted(a, key=lambda i: (i[1],  i[0]))

    cnt=0
    cur=-1
    for i in a:
        if i[0]>=cur:
            cnt+=1
            cur=i[1]
    print(cnt)
    t-=1
