

t=int(input())
while t!=0:
    n=int(input())
    a=list(map(int, input().split()))

    dct=dict()
    for i in a:
        if i not in dct:
            dct[i]=1
        else:
            dct[i]+=1

    lst_keys=sorted(dct, key=lambda i: (-dct[i], i))
    if dct[lst_keys[0]]>n//2: print(lst_keys[0])
    else: print("NO")
    t-=1

