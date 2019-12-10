k=int(input())
l=int(input())
m=int(input())
n=int(input())
d=int(input())
count=0

for i in range(1,d+1,1):
    c=0
    if i%k==0:c+=1
    if i%l==0:c+=1
    if i % m == 0: c += 1
    if i % n == 0: c += 1

    if c==0:
        count+=1
print(d-count)
