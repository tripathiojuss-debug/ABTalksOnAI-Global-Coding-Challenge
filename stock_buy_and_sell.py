def maxProfit(Prices):
    max_profit=0
    min_price=Prices[0]
    n=len(Prices)
    for i in range(1,n):
        profit=Prices[i]-min_price
        min_price=min(min_price,Prices[i])
        max_profit=max(profit,max_profit)

    return max_profit

def main():
    n=int(input("Enter number of days : "))
    Prices = list(map(int, input(f"Enter prices for {n} days: ").split()))

    if len(Prices)!=n:
        print("Number of prices entered does not match n!")
        return
    result=maxProfit(Prices)
    print("Maximum Profit : ",result)

if __name__ == "__main__":
        main()