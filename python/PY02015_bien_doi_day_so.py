

while True:
    a=list(map(int, input().split()))
    if a[0]==a[1] and a[1]==a[2] and a[2]==a[3] and a[0]==0:
        break

    cnt=0
    while not(a[0]==a[1] and a[1]==a[2] and a[2]==a[3]):
        tmp=a[0]
        for i in range(3):
            a[i]=abs(a[i]-a[i+1])
        a[3]=abs(a[3]-tmp)
        cnt+=1
    print(cnt)
