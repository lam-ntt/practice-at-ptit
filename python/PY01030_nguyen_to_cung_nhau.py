
def gcd(a, b):
    if a<b: a, b=b, a
    while b!=0:
        tmp=a
        a=b
        b=tmp%b
    return a

if __name__=="__main__":
    n, k=map(int, input().split())
    cnt=0
    for i in range(pow(10, k-1), pow(10, k)):
        if gcd(n, i)==1:
            cnt+=1
            print(i, end=" ")
            if cnt!=0 and cnt%10==0: print()

