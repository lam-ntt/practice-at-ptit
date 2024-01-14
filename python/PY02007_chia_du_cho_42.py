
se=set()
try:
    while True:
        a=list(map(int, input().split()))
        for i in a:
            se.add(i%42)
except:
    print(len(se))
