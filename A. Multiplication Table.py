n=2
c=0
arr=list(map(int,input().split()))[:n]

for i in range(1,arr[0]+1,1):
    if arr[1]%i==0:
        l=int(arr[1]/i)
        if l<=arr[0]:
            c=c+1

print(c)