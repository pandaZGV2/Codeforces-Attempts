def decsumofdig(n,s):
    digits=[]
    c=0
    while n>0:
        digits.append(n%10)
        n=int(n/10)
    while sum(digits)>s:
        c=c+1
        digits[0]=digits[0]+1
        if digits[0]==0:
            for i in range(len(digits)):
                if len(digits)==1:
                    digits[1]=1
                else:
                    digits[i+1]=digits[i+1]+1
        else:
            continue
    return c
t=int(input("Enter a number:"))
l=[]
for I in range(t):
    ns=input("").split()
    n=int(ns[0])
    s=int(ns[1])
    c=decsumofdig(n,s)
    l.append(c)
for i in l:
    print(i)
