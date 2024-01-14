
def convert(s):
    res=0
    tmp=0
    for i in range(len(s)-1, -1, -1):
        if s[i]=='1': res+=pow(2, tmp)
        tmp+=1
    return res

if __name__=="__main__":
    with open("DATA.in", "r") as r:
        data=r.readlines()
    r.close()

    cnt=0
    t=int(data[cnt])
    cnt+=1
    for i in range(t):
        n=int(data[cnt])
        cnt+=1
        s=data[cnt].replace("\n", "")
        cnt+=1

        if n==2:
            print(s)
            continue

        if n==4: k=2
        elif n==8: k=3
        else: k=4
        while len(s)%k!=0:
            s="0"+s

        for i in range(0, len(s), k):
            tmp=convert(s[i:i+k])
            if tmp<10: print(tmp, end="")
            else: print(chr(ord('A')+tmp-10), end="")
        print()


