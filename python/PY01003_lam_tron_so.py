
t=int(input())
while t!=0:
    n=int(input())
    d=0
    while n>9:
        if n%10>=5: n=n//10+1
        else: n//=10
        d+=1
    n=str(n)+"0"*d
    print(n)
    t-=1