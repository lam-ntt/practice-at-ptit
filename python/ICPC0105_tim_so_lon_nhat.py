import re

t=int(input())
while(t!=0):
    a=re.split("[^0-9]", input())
    mx=-1
    for i in a:
        try:
            mx=max(mx, int(i))
        except:
            continue
    print(mx)
    t-=1
