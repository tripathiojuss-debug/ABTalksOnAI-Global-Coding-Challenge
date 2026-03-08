# FUNCTION
def Power_of_two(n):
    if(n==1):
        return True
    if(n<=0):
        return False
    while n%2==0:
        n=n//2
    if(n==1):
        return True
    return False
# Main Function
n=int(input("Input a number : "))
if(Power_of_two(n)):
    print("YES")
else : print("NO")
    