
t=int(input())
while t!=0:
    n=int(input())
    res=0
    for i in range(n, 0, -2):
        res+=1/i
    print(f"%.6f" %res)
    t-=1