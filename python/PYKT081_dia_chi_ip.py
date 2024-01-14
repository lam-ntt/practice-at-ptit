
def check(n):
    for i in n:
        if not(i=='.' or i.isdigit()): return False

    tmp=list(map(int, n.split(".")))
    if len(tmp)!=4: return False
    for i in tmp:
        if not(i>=0 and i<=255): return False
    return True

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=input()
        if check(n): print("YES")
        else: print("NO")
        t-=1
