for _ in range(int(input())):
    n=int(input())
    a=[]
    a[0:n]=map(int,input().split())
    l=list(set(a))
    zz=[]
    count=0
    a.sort()
    for i in range(len(a)-1):
        j=i+1
        if a[j]-a[i]>1:
            count=1
            break
    if count!=0:
        print("NO")
    else:
        print("YES")
 
 
