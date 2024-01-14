
def move(a, b, c, n):
    if n==1:
        print(a, "->", c)
        return
    move(a, c, b, n-1)
    move(a, b, c, 1)
    move(b, a, c, n-1)

if __name__=="__main__":
    n=int(input())
    move('A', 'B', 'C', n)