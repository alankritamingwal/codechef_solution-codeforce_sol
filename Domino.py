n=int(input())
s=False
l=0
r=0
if n>1:
    for i in range(n):
        x,y=map(int,input().split())
        if x%2+y%2==1:
            s=True

        l+=x
        r+=y
    if l%2==0 and r%2==0:
        print(0)
    elif l%2==1 and r%2==1 and s:
        print(1)
    else:
        print(-1)
else:
    x,y=map(int,input().split())
    if x%2==0 and y%2==0:
        print(0)
    else:
            print(-1)







