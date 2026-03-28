n = int(input())
m = []
for i in range(n):
    people = list(map(int, input().split()))
    a = [0]*7
    for j in people:
        a[j]+=1
    if max(a) == 4:
        m.append(50000 + a.index(max(a)) * 5000)
    elif max(a) == 3:
        m.append(10000 + a.index(max(a)) * 1000)
    if max(a) == 1:
        m.append(a.index(1) * 500)
print(m)