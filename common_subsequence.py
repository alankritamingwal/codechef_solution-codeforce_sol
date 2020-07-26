for _ in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    t=min(n,m)
    count=0
    if t==m:
        for i in range(t):
            if b[i] in a:
                count+=1
                print("YES")
                print(1,b[i])
                break
        if count==0:
            print("NO")
    else:
        for i in range(t):
            if a[i] in b:
                count+=1
                print("YES")
                print(1,a[i])
                break
        if count==0:
            print("NO")



