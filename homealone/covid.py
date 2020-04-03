
x = input()

x = x.split(' ')
x = [int(i) for i in x]
# print(x)
max0=0
max1=0
max=0
j=0
while j<len(x):
    if j%2==0:
        max0=max0+x[j]
    else:
        max1=max1+x[j]
    j=j+1

i=1
x1=x
while i<len(x1):
    if (i==(len(x1)-1)):
        if x1[i]>x1[i-1]:
            x1.pop(i-1)
            break
        else:
            x1.pop(i)
            break

    if (x1[i]>(x1[i-1]+x1[i+1])):
        x1.pop(i) 
    else:
        x1.pop(i-1)
        x1.pop(i)
    i=i+1

i=0
while i<len(x):
    if i==0:
        x.pop(i)
        i=i+1
        continue
    if (i==(len(x)-1)):
        if x[i]>x[i-1]:
            x.pop(i-1)
            break
        else:
            x.pop(i)
            break

    if (x[i]>(x[i-1]+x[i+1])):
        x.pop(i) 
    else:
        x.pop(i-1)
        x.pop(i)
    i=i+1


max2=0
max3=0
i=0
while i<len(x):
    max2=max2+x[i]
    i=i+1

i=0
while i<len(x1):
    max3=max3+x1[i]
    i=i+1


if(max<max0):
    max=max0


if(max<max1):
    max=max1

if(max<max2):
    max=max2

if(max<max3):
    max=max3
print(max)



