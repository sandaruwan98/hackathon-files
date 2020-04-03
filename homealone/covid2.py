
x = input()

x = x.split(' ')
x = [int(i) for i in x]
# print(x)
len=len(x)
x2=[0]*len
if len==0:
    x2[len-1]=0
elif len==1:
    x2[len-1]=x[0]
elif len==2:
    x2[len-1]=max(x[0],x[1])
else:

    x2[0]=x[0]
    x2[1]=max(x[0],x[1])

    for i in range(2,len):  
        x2[i]=max(x2[i-1],x[i]+x2[i-2])

print(x2[len-1])