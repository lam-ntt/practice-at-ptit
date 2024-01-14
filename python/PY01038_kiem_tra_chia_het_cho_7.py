
t=int(input())
while t!=0:
    n=input()
    cnt=0
    while int(n)%7!=0 and cnt<1000:
        n=str(int(n)+int(n[::-1]))
    if int(n)%7==0: print(n)
    else: print(-1)
    t-=1