
t=int(input())
dct=dict()
start=1
cur=""

while t!=0:
    s=input()
    if s=="":
        start=1
    else:
        if start==1:
            dct[s]=0
            cur=s
            start=0
        else:
            dct[cur]+=1
    t-=1

for i in dct:
    print(i+": "+str(dct[i]))



