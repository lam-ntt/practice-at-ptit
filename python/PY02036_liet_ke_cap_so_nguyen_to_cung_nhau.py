

def gcd(a, b):
    a, b=b, a
    while b!=0:
        tmp=a
        a=b
        b=tmp%b
    return a

if __name__=="__main__":
    n=int(input())
    a=list(map(int, input().split()))

    a=sorted(a)
    for i in range(0, len(a)):
        for j in range(i+1, len(a)):
            if gcd(a[i], a[j])==1: print(a[i], a[j])