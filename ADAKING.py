for _ in range(int(input())):
    k=int(input())
    arr=[0]*64
    arr[0]='O'
    i=1
    k-=1
    count=0
    while k>0:
        arr[i]='.'
        k-=1
        i+=1
    for j in range(i,64):
        arr[j]='X'
    for i in range(8):
        for u in range(8):
            print(arr[count],end='')
            count+=1
        print()
