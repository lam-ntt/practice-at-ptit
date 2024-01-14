
s=input()
k=int(input())

dct=dict()
if len(s)%2==1: s=s[0:len(s)-1]
for i in range(0, len(s), 2):
    tmp=int(s[i:i+2])
    if tmp not in dct:
        dct[tmp]=1
    else:
        dct[tmp]+=1

a=[]
for i in dct:
    if dct[i]>=k:
        a.append(i)

a=sorted(a)
for i in a:
    print(i, dct[i])
if len(a)==0: print("NOT FOUND")
