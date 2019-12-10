x=input()
y=input()

l=len(x)

for i in range(l):
    if x[i]==y[i]:
        print('0',end='')
    else:
        print('1',end='')