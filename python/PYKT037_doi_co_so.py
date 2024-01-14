
def convert(n, b):
    res=""
    while n!=0:
        tmp=n%b
        if tmp>9: res=chr(tmp-10+ord('A'))+res
        else: res=str(tmp)+res
        n//=b
    return res

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n, base=map(int, input().split())
        print(convert(n, base))
        t-=1

