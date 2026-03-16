import sys
sys.setrecursionlimit(1000000)
def s(aa,bb):
    if aa>bb:
        return s(aa,bb+b)
    elif aa<bb:
        return s(aa+a,bb)
    else:
        print(aa)
        return 0

a,b=map(int,input().split())
for i in range(min(a,b),0,-1):
    if a%i==0 and b%i==0:
        print(i)
        break
s(a,b)