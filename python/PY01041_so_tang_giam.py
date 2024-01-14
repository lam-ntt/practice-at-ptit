
def check(n):
    if len(n)<3: return False
    inc, dec, pos=0, 0, -1
    for i in range(len(n)-1):
        if n[i]<n[i+1]: inc+=1
        else:
            pos=i
            break
    if pos==-1: return True
    for i in range(pos, len(n)-1):
        if n[i]>n[i+1]: dec+=1
    return inc+dec==len(n)-1

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=input()
        if check(n): print("YES")
        else: print("NO")
        t-=1
