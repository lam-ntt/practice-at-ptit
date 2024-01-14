
n=0
a=[]
mark=[]
res=[]

def save():
    tmp=""
    for i in range(1, n+1):
        tmp+=str(a[i])
    res.append(tmp)

def tryy(i):
    for j in range(n, 0, -1):
        if mark[j]==0:
            a[i]=j
            mark[j]=1
            if i==n: save()
            else: tryy(i+1)
            mark[j]=0


if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=int(input())

        a=[i for i in range(n+1)]
        mark=[0 for i in range(n+1)]
        res=[]
        tryy(1)
        print(len(res))
        for i in res:
            print(i, end=" ")
        print()
        t-=1