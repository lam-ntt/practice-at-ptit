
f=[1 for i in range(10)]

def init():
    for i in range(2, 10):
        f[i]=i*f[i-1]

def check(n):
    nn, tmp=n, 0
    while nn!=0:
        tmp+=f[nn%10]
        nn//=10
    return tmp==n

if __name__=="__main__":
    init()
    t=int(input())
    while t!=0:
        n=int(input())
        if check(n): print("Yes")
        else: print("No")
        t-=1