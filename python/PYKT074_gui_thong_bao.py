
t=int(input())
while t!=0:
    a=list(map(str, input().split()))
    cur=len(a[0])
    print(a[0], end=" ")

    for i in range(1, len(a)):
        if cur+1+len(a[i])>99: break
        cur+=1+len(a[i])
        print(a[i], end=" ")
    print()
    t-=1

