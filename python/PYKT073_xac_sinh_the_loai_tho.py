
t=int(input())
stack=[]
cnt=0
while t!=0:
    tmp=len(list(map(str, input().split())))
    if len(stack)!=0:
        if tmp==7:
            cnt+=1
            if cnt%4==0: stack.append(tmp)
        else:
            if stack[len(stack)-1]==7: stack.append(tmp)
    else:
        stack.append(tmp)
    t-=1

print(len(stack))
for i in stack:
    if i==7: print(2)
    else: print(1)

