n=6
a=[2,4,7,16,23,99]
prefix=[1]*n
prefix[0]=a[0]
for i in range(1,n):
    prefix[i]=prefix[i-1]+a[i]
print(prefix)

    
    
