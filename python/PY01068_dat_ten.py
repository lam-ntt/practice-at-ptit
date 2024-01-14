
n, k=0, 0
a=[]

def save():
    for i in range(1, k+1):
        print(A[a[i]-1], end=" ")
    print()

def tryy(i):
    for j in range(a[i-1]+1, n+1):
        a[i]=j
        if i==k: save()
        else: tryy(i+1)


if __name__=="__main__":
    n, k=map(int, input().split())
    A=sorted(set(map(str, input().split())))

    n=len(A)
    a=[0 for _ in range(k+1)]
    a[0]=0
    tryy(1)
