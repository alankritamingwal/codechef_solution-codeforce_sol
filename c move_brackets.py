for _ in range(int(input())):
    n=int(input())
    st=input()
    operation=0
    flip=0
    for i in range(n):
        if st[i]=="(":
            flip+=1
        else:
            flip-=1
        if flip<0:
            operation+=1
            flip=0
    print(operation)
