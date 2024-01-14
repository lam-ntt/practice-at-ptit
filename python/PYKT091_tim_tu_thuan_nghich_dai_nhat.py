
with open("VANBAN.in", "r") as r:
    tmp=r.readlines()
r.close()

a=[]
for i in tmp:
    tmp2=list(map(str, i.replace("\n", "").split()))
    for j in tmp2:
        a.append(j)

res=[]
mx=-1
for i in a:
    if i==i[::-1]:
        if len(i)>mx:
            res=[i]
            mx=len(i)
        elif len(i)==mx:
            res.append(i)

se=set()
for i in res:
    if i not in se:
        print(i, res.count(i))
        se.add(i)
