a,b=map(int,input().split())
c=[]
for i in range(a,0,-1):
    if a%i==0:c.append(i)
if len(c)<b:
    print(0)
else:
    print(c[-b])