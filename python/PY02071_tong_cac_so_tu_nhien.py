
n=0
a=[]
res=[]

def tryy(i):
    global n
    for j in range(a[i-1], 0, -1):
        if j<=n:
            a[i]=j
            n-=j
            if n==0: res.append(a[1:i+1])
            else: tryy(i+1)
            n+=j

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=int(input())
        a=[0 for _ in range(n+1)]
        a[0]=n

        res=[]
        tryy(1)
        print(len(res))
        for i in res:
            tmp=""
            for j in i:
                tmp+=(str(j)+" ")
            print(f"({tmp[:len(tmp)-1]})", end=" ")
        print()

        t-=1