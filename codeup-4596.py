b=[-1]*3
for i in range(9):
    a=list(map(int,input().split()))
    if max(a)>b[0]:
        b[0]=max(a)
        b[1]=i+1
        b[2]=a.index(max(a))+1
print(b[0])
print(b[1],b[2])