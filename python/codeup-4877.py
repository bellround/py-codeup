a,b,c,n=map(int,input().split())
li=[a,b,c,a+b,a+c,b+c,a+b+c]
for i in range(1,n+1):
    for j in li:
        if i%j==0:
            li.append(i) #3중 for문으로 전에꺼 새거와 더해야 함
print(li)