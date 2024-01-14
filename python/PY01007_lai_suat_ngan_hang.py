
t=int(input())
while t!=0:
    n, x, m=map(float, input().split())
    count=0
    while n<m:
        n*=(1+x/100)
        count+=1
    print(count)
    t-=1