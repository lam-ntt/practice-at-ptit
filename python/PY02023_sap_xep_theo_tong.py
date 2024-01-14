
def sum(n):
    res=0
    while n!=0:
        res+=n%10
        n//=10
    return res

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=int(input())
        a=list(map(int, input().split()))

        a=sorted(a, key=lambda i: (sum(i), i))
        for i in a:
            print(i, end=" ")
        print()
        t-=1
