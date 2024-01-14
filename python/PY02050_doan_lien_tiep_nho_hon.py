

t=int(input())
while t!=0:
    n=int(input())
    a=list(map(int, input().split()))

    stack=[]
    for i in range(len(a)):
        while len(stack)!=0 and a[stack[len(stack)-1]]<=a[i]:
            stack.pop()
        if len(stack)==0:
            print(i+1, end=" ")
        else:
            print(i-stack[len(stack)-1], end=" ")
        stack.append(i)
    print()
    t-=1
