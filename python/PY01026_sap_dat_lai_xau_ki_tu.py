


if __name__=="__main__":
    t=int(input())
    cnt=1
    while t!=0:
        s=input()
        r=input()
        print("Test ", cnt, ": ", sep="", end="")
        cnt+=1
        if sorted(s)==sorted(r): print("YES")
        else: print("NO")
        t-=1
