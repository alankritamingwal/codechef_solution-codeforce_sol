for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    sum1=0
    sum2=0
    cc=0
    for i in range(n):
        sum1+=a[i]
        sum2+=b[i]
        if sum1==sum2 and a[i]==b[i]:
            cc+=a[i]
    print(cc)
