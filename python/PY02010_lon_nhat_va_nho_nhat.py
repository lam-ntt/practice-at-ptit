
while True:
    n=int(input())
    if n==0: break
    a=[]
    for i in range(n):
        a.append(int(input()))

    mn=min(a)
    mx=max(a)
    if mn==mx: print("BANG NHAU")
    else: print(mn, mx)
