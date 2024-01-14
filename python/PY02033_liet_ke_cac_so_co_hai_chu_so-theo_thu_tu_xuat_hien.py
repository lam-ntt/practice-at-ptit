
s=input()
a=[]
if len(s)%2==1: s=s[0:len(s)-1]
for i in range(0, len(s), 2):
    tmp=int(s[i:i+2])
    if tmp not in a:
        a.append(tmp)

for i in a:
    print(i, end=" ")