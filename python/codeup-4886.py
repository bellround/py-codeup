n,k=map(int,input().split())
a=[]
aa=[0]*5
b=0
for i in range(n):
    a.append(list(map(int,input().split())))
    if a[i][1]==1 or a[i][1]==2:aa[0]+=1
    elif a[i][1]==3 or a[i][1]==4:
        if a[i][0]==1:aa[1]+=1
        else:aa[2]+=1
    else:
        if a[i][0]==1:aa[3]+=1
        else:aa[4]+=1
for i in aa:
    b+=int(-(-i//k))
print(b)