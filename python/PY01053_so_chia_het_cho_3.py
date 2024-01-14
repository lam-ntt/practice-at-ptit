
def check(n):
    sum=0
    for i in range(len(n)):
        sum+=ord(n[i])-ord('0')
    return sum%3==0

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=input()
        if check(n): print("YES")
        else: print("NO")
        t-=1
