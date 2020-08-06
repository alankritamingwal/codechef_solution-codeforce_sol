for _ in range(int(input())):
    n=int(input())
    a=[]
    b=[]
    a[0:n]=map(int,input().split())
    b[0:n]=map(int,input().split())
    count=0
    for i in range(n):
        cc=b[i]-min(b)
        count+=cc
        if a[i]-cc>min(a):
            count+=((a[i]-cc)-min(a))
    print(count)
