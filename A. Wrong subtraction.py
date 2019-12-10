n,m=input().split()

n=int(n)
m=int(m)

for i in range(m):
    rem=n%10

    if rem==0:
        n=int(n/10)
    else:
        n=n-1
print(n)

