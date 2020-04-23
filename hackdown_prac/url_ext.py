x = input()
x= x.split('?')
x= x[1].split('&')

for n in x:
    n = n.split('=')
    print(n[0]+" "+n[1])