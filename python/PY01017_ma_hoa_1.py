
t=int(input())
while t!=0:
    s=input()
    cnt=0
    cur=s[0]
    for c in s:
        if c==cur: cnt+=1
        else:
            print(cnt, cur, sep="", end="")
            cur=c
            cnt=1
    print(cnt, s[len(s)-1], sep="")
    t-=1

