n=int(input("Enter an integer number : "))
steps=0
while n > 0:
    if n%2==0:
        n=n//2
    else:
        n=n-1
    steps+=1
print("Total steps taken to reduce number to zero are : ",steps)


