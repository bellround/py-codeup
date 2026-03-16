for i in range(3):
    a=list(map(int,input().split()))
    n=0
    for i in a:
        n+=i
    if n==0:
        print('D')
    elif n == 3:
        print("A")
    elif n == 2:
        print("B")
    elif n == 1:
        print("C")
    else:
        print("E")