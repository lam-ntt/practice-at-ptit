

n=int(input())
a=list(map(int, input().split()))

stack=[]
for i in a:
    if len(stack)==0:
        stack.append(i)
    else:
        if (stack[len(stack)-1]+i)%2==0:
            stack.pop()
        else:
            stack.append(i)
print(len(stack))
