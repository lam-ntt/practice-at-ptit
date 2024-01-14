
s=input()
for i in range(0, len(s)):
    print(s[i], end="")
    if i!=len(s)-1:
        if len(s)%3==0 and i%3==2: print(",", end="")
        if len(s)%3==1 and i%3==0: print(",", end="")
        if len(s)%3==2 and i%3==1: print(",", end="")