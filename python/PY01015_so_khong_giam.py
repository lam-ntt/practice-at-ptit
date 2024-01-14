
def check(n):
    cur=10
    while n!=0:
        if n%10>cur: return False
        cur=n%10
        n//=10
    return True


if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=int(input())
        if(check(n)): print("YES")
        else: print("NO")
        t-=1
