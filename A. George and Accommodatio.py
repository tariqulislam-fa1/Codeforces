x=int(input())
c=0


for i in range(1,x+1,1):

    a,b=input().split(" ")

    r=abs(int(a)-int(b))

    #print(r)

    if r>=2:
        c=c+1
print(c)