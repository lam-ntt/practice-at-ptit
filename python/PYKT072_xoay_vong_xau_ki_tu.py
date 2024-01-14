
def roltate(s, t, times):
    cnt=0
    for i in range(times):
        if s==t: return cnt
        s=s[1:]+s[:1]
        cnt+=1
    return -1

if __name__=="__main__":
    n=int(input())
    a=[0]
    s=input()
    for i in range(n-1):
        tmp=input()
        a.append(roltate(tmp, s, len(s)))

    if -1 in a:
        print("-1")
    else:
        cnt=1e9
        for i in a:
            tmp=0
            for j in a:
                if j!=i:
                    if i>=j: tmp+=len(s)-(i-j)
                    else: tmp+=j-i
            cnt=min(cnt, tmp)
        print(cnt)
