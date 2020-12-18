import math
def decsumofdig(n,s):
    so=str(n)
    sum=0
    c=0
    h=n
    f=0
    while h>0:
        f=f+h%10
        h=int(h/10)
    if f==s:
        return 0;    
    for i in so:
        if sum<s:
            sum=sum+int(i)
            c=c+1
            continue
        else:
            break
    length=len(so[c-1:])
    g=pow(10,length)
    return g-int(so[c-1:])



t=int(input(""))
l=[]
for i in range(t):
    ns=input("")
    (n,s)=map(int,ns.split())
    l.append(decsumofdig(n,s))
for i in l:
    print(i)               