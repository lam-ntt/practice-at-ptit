
n=int(input())
a=[]
while len(a)!=n:
    tmp=list(map(int, input().split()))
    for i in tmp:
        a.append(i)

se=set(a)
mx=max(a)
if len(se)==mx: print("Excellent!")
else:
    for i in range(1, mx):
        if i not in se:
            print(i)

