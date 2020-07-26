for _ in range(int(input())):
    n=int(input())
    s=input()
    zz=[]
    counyt=0
    for i in s:
        zz.append(s.count(i))
    for j in zz:
        if j%2==0:
            counyt+=2
        else:
            counyt=-100
            break
    if counyt>0:
        print("YES")
    else:
        print("NO")
        
