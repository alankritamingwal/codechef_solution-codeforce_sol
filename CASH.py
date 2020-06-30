# cook your dish here
t=int(input())
for i in range(t):
    n,k=map(int, input().split())
    a=[]
    a[0:n]=map(int, input().split())
    s=0
    s=sum(a)%k
    print(s)
