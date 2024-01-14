
a, b, c=[], [], []

def cal():
    row, col=len(a)-2, len(a[0])-2
    global c
    c=[[0 for _ in range(col)] for __ in range(row)]

    for i in range(row):
        for j in range(col):
            tmp=0
            for k in range(0, 3):
                for f in range(0, 3):
                    tmp+=a[i+k][j+f]*b[k][f]
            c[i][j]=tmp

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n, m=map(int, input().split())
        a.clear()
        b.clear()
        for i in range(n):
            a.append(list(map(int, input().split())))
        for i in range(3):
            b.append(list(map(int, input().split())))

        c.clear()
        cal()

        res=0
        for i in c:
            res+=sum(i)
        print(res)
        t-=1
