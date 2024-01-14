
n, m=map(int, input().split())
a=set(map(int, input().split()))
b=set(map(int, input().split()))

its=sorted(a.intersection(b))
ab=sorted(a.difference(b))
ba=sorted(b.difference(a))

for i in its: print(i, end=" ")
print()
for i in ab: print(i, end=" ")
print()
for i in ba: print(i, end=" ")
