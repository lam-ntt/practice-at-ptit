
t=int(input())
dct=dict()
while t!=0:
    s=list(map(str, input().split()))
    if s[3]=="OUT":
        t-=1
        continue

    if s[2]=="5": price=10000
    elif s[2]=="7": price=15000
    elif s[2]=="2": price=20000
    elif s[2]=="29": price=50000
    else: price=70000

    if s[4] in dct:
        dct[s[4]]+=price
    else:
        dct[s[4]]=price
    t-=1

for i in dct:
    print(i+": "+str(dct[i]))

