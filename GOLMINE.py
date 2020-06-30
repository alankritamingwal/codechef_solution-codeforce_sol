# cook your dish here
for _ in range(int(input())):
    n=int(input())
    aa=[]
    bb=[]
    for i in range(n):
        g, a, b = map(int, input().split())
        ta=g/a
        tb=g/b
        su=(1/a)+(1/b)
        ss=1/su
        aa.append(ss*ta)
        bb.append(ss*tb)
    sa=sum(aa)
    sb=sum(bb)
    print("{0:.5f}".format(sa),"{0:.5f}".format(sb))
