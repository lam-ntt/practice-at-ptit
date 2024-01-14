
def check(n):
    for i in range(len(n)):
        if n[i] not in ['0', '1', '2']: return False
    return True

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=input()
        if check(n): print("YES")
        else: print("NO")
        t-=1
