
def check(n):
    if n<10: return False
    return str(n)==str(n)[::-1]

if __name__=="__main__":
    n, m=map(int, input().split())
    a=[]
    for i in range(n):
        a.append(list(map(int, input().split())))

    mx=-1
    for i in a:
        for j in i:
            if check(j):
                mx=max(mx, j)
    if mx==-1: print("NOT FOUND")
    else:
        print(mx)
        for i in range(n):
            for j in range(m):
                if a[i][j]==mx:
                    print(f"Vi tri [{i}][{j}]")
