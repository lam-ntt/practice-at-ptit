
n=int(input())
a=[]
while len(a)!=n:
    tmp=list(map(int, input().split()))
    for i in tmp:
        a.append(i)
odd=[i for i in a if i%2==1]
even=[i for i in a if i%2==0]

odd=sorted(odd, reverse=True)
even=sorted(even)
cnt1=0
cnt2=0
for i in a:
    if i%2==1:
        print(odd[cnt1], end=" ")
        cnt1+=1
    else:
        print(even[cnt2], end=" ")
        cnt2+=1
