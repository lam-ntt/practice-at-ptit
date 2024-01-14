
def check(n):
    a={-1, }
    for i in n:
        a.add(i)
    if len(a)!=3: return False

    for i in range(0, len(n)-2):
        if n[i]!=n[i+2]: return False
    return True

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=input()
        if check(n): print("YES")
        else: print("NO")
        t-=1

