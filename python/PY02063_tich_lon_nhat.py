
n=int(input())
a=list(map(int, input().split()))
a=sorted(a)

print(max(a[0]*a[1], a[n-1]*a[n-2],
          a[0]*a[1]*a[n-1], a[n-1]*a[n-2]*a[n-3]))
