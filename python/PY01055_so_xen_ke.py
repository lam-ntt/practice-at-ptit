

def check(n):
    if len(n)%2==0: return False
    if n[0]==n[1]: return False
    tmp=n[0]
    for i in range(2, len(n), 2):
        if n[i]!=tmp: return False
    return True

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=input()
        if check(n): print("YES")
        else: print("NO")
        t-=1
