
t=int(input())
while t!=0:
    n=int(input())
    a=list(map(int, input().split()))

    xor=0
    for i in a:
        xor^=i
    print(xor)
    t-=1
