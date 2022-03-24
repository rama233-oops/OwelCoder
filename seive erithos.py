n=50
a=[True]*n
print(a)
a[0]=False
a[1]=False
i=2
while(i*i<=n):
    for j in range(i*i,n,i):
        
        a[j]=False
        
    i+=1
print(a)
if(a[47]):
    print(True)
else:
    print(False)
