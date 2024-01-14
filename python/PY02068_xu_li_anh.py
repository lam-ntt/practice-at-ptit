
a=[]

def cal():
    global a
    for i in range(1, len(a)):
        a[i][0]+=a[i-1][0]

    for i in range(0, len(a[0])):
        a[0][i]+=a[0][i-1]

    for i in range(1, len(a)):
        for j in range(1, len(a[0])):
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1]

def check(n, m, e, f):
    global a
    if i==0 and j==0: return a[e][f]
    elif i==0: return a[e][f]-a[e][m-1]
    elif j==0: return a[e][f]-a[n-1][f]
    else: return a[e][f]-a[e][m-1]-a[n-1][f]+a[n-1][m-1]

t=int(input())
while t!=0:
    n, m, k=map(int, input().split())
    a=[]
    for i in range(n):
        a.append(list(map(int, input().split())))

    cal()
    for i in range(n-k+1):
        for j in range(m-k+1):
            print(check(i, j, i+k-1, j+k-1)//(k*k), end=" ")
        print()
    t-=1
