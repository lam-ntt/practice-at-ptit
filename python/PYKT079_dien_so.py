
t=int(input())
while t!=0:
    n=int(input())
    a=set(map(int, input().split()))
    print(max(a)-min(a)+1-len(a))
    t-=1