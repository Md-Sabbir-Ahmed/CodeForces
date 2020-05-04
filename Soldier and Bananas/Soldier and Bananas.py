k,n,w=map(int,input().split())

s=0

while(w!=0):
    b=k*w
    s=s+b
    w=w-1
q=s-n
if q<0:
    print("0")
else:
    print(q)
