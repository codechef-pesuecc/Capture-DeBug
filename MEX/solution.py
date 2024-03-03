
k = int(input())
m = input()
q = m.split()
a = [int(y) for y in q]
b = list(set(a))
b.sort()
res = 1
for i in b:
    if(i==res):
        res = res+1
    else:
        break
print(res)
