t=int(input())
for x in range(t):
    n=int(input())
    a=[]
    b=[]
    a[0:n]=map(int, input().split())
    b[0:n]=map(int, input().split())
    a.sort()
    b.sort()
    s=[]
    for j in range(n):
      s.append(min(a[j], b[j]))
    print(sum(s))
