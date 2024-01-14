


t=int(input())
while t!=0:
    n=int(input())
    dct=dict()
    for i in range(n):
        tmp=int(input())
        if tmp not in dct:
            dct[tmp]=1
        else:
            dct[tmp]+=1

    lst_keys=sorted(dct, key=lambda i: (-dct[i], i))
    print(lst_keys[0])
    t-=1

