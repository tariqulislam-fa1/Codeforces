x=int(input())

str=input()
d=0
a=0

l=len(str)

for i in range(l):
    if str[i]=='D':
        d+=1
    elif str[i]=='A':
        a+=1

if d>a:
    print("Danik")
elif a>d:
    print("Anton")
else :
    print("Friendship")