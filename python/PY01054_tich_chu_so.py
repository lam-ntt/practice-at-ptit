
t=int(input())
while t!=0:
    n=input()
    multi=1
    for i in range(len(n)):
        tmp=ord(n[i])-ord('0')
        if tmp!=0: multi*=tmp
    print(multi)
    t-=1
