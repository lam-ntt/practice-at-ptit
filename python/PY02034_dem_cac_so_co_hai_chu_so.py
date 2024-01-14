
s=input()
dct=dict()
if len(s)%2==1: s=s[0:len(s)-1]
for i in range(0, len(s), 2):
    tmp=int(s[i:i+2])
    if tmp not in dct:
        dct[tmp]=1
    else:
        dct[tmp]+=1

for i in dct:
    print(i, dct[i])