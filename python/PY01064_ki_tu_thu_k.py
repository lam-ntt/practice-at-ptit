
def find(n, k):
    p=pow(2, n-1)
    if k==p: return chr(n-1+ord('A'))
    elif k<p: return find(n-1, k)
    else: return find(n-1,  k-p)

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n, k=map(int, input().split())
        print(find(n, k))
        t-=1
