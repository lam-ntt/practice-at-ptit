
P="ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while True:
    tmp=input()
    if tmp[0]=='0': break
    else:
        k, s=tmp.split()
        k=int(k)
        res=""
        for c in s:
            res+=P[(P.find(c)+k)%28]
        print(res[::-1])
