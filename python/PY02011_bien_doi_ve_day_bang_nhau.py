
n=int(input())
a=list(map(int, input().split()))

dct=dict()
mn=1e9
for i in a:
    tmp=0
    for j in a:
        tmp+=abs(j-i)
    dct[i]=tmp
    mn=min(mn, tmp)

for i in dct:
    if dct[i]==mn:
        print(mn, i)
        break


