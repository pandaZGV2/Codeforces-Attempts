def minpro(a,b,x,y,n):
    if a-x>=b-y:
        if a-x>=n:
            a=a-n
        else:
            n=n-a+x
            a=x
            if b-y>=n:
                b=b-n
            else:
                b=y
    else:
        if b-y>=n:
            b=b-n
        else:
            n=n-b+y
            b=y
            if a-x>=n:
                a=a-n
            else:
                a=x
                        

    return a*b
t=int(input(""))
l=[]
for i in range(t):
    abxyn=input("")
    a,b,x,y,n=map(int,abxyn.split())
    pro=minpro(a,b,x,y,n)
    l.append(pro)
for i in l:
    print(i)                        
