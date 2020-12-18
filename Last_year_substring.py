import re
s1="2020"
s2="202"+r'\d'+"0"
s3="20"+r'\d'+"20"
s4="2"+r'\d'+"020"
t=int(input(""))
for i in range(t):
    n=input("")
    s=input("")
    if s.find(s1):
        print("YES")
    elif s.find(s2):
        print("YES")
    elif s.find(s3):
        print("YES")
    elif s.find(s4):
        print("YES")
    else:
        print("NO")



