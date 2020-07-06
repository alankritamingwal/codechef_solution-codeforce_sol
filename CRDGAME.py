for _ in range(int(input())):
    n=int(input())
    chef=0
    monty=0
    for i in range(n):
        a,b=map(int,input().split())
        sa=0
        sb=0
        while (a> 0):
            dig = a%10
            sa = sa+dig
            a = a//10
        while b>0:
            dd=b%10
            sb=sb+dd
            b=b//10
        if sa>sb:
            chef+=1
        elif sa==sb:
            monty+=1
            chef+=1
        elif sb>sa:
            monty+=1
    if chef>monty:
        print(0,chef)
    elif monty>chef:
        print(1,monty)
    elif monty==chef:
        print(2,chef)

