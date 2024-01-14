
with open("CONTACT.in", "r") as r:
    a=r.readlines()
r.close()

res=[]
for i in a:
    i=i.lower().replace("\n", "")
    if i not in res:
        res.append(i)

res=sorted(res)
for i in res:
    print(i)