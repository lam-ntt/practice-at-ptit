
while True:
    n=int(input())
    if n==0: break
    if n==1:
        print("1")
        continue

    queue=[]
    queue.append(n)
    se=set()
    se.add(n)
    while True:
        tmp=queue[(len(queue)-1)]
        if tmp%2==0:
                queue.append(tmp//2)
                se.add(tmp//2)
                if tmp//2==1: break
        else:
            queue.append(tmp*3+1)
            se.add(tmp*3+1)
            if tmp*3+1==1: break
        queue.pop(0)
    print(len(se))