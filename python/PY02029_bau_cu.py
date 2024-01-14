
n, k=map(int, input().split())
a=list(map(int, input().split()))

dct=dict()
mx=-1
for i in a:
    if i not in dct:
        dct[i]=a.count(i)
        mx=max(mx, dct[i])
for i in dct:
    if dct[i]==mx: dct[i]=0

lst_keys=sorted(dct, key=lambda i: (-dct[i], i))
if dct[lst_keys[0]]!=0:
    print(lst_keys[0])
else:
    print("NONE")

