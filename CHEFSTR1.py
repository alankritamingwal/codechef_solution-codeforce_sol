for _ in range(int(input())):
    n=int(input())
    s=[]
    s[0:n]=map(int,input().split())
    zz=[]
    for i in range(n-1):
        if s[i]<s[i+1]:
            count=s[i+1]-s[i]
            zz.append(count-1)
        else:
            cc=s[i]-s[i+1]
            zz.append(cc-1)
    print(sum(zz))
