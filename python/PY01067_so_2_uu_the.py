
t=int(input())
while t!=0:
    n=int(input())
    queue=["1", "2"]
    cnt=0
    while True:
        queue.append(queue[0]+"0")
        queue.append(queue[0]+"1")
        queue.append(queue[0]+"2")
        tmp=queue.pop(0)
        if tmp.count("2")>len(tmp)//2:
            print(tmp, end=" ")
            cnt+=1
        if cnt==n: break
    print()
    t-=1