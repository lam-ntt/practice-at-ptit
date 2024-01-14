
def convert(s):
    res=0
    base=0
    for i in range(len(s)-1, -1, -1):
        if s[i: i+1]=='1':
            res+=pow(2, base)
        base+=1
    return res


if __name__=="__main__":
    t=int(input())
    while t!=0:
        k=int(input())
        s=input()

        if k==2:
            print(s)
            t-=1
            continue
        elif k==4: k=2
        elif k==8: k=3
        else: k=4

        while len(s)%k!=0:
            s="0"+s

        res=""
        for i in range(0, len(s), k):
            tmp=convert(s[i: i+k])
            if tmp>9:
                tmp=chr(tmp-10+ord('A'))
            else:
                tmp=str(tmp)
            res+=tmp

        while res[0: 1]=='0':
            res=res[1:]
        print(res)
        t-=1

