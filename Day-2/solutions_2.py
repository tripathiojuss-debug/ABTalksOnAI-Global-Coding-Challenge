try:
    n = int(input("Enter number of elements: "))

    print("Enter elements:")
    arr = list(map(int, input().split()))

    if len(arr) != n:
        print("Invalid input! Number of elements does not match.")
        exit()

    running_sum = []
    total = 0

    for num in arr:
        total += num
        running_sum.append(total)

    print("Running Sum:", running_sum)

except ValueError:
    print("Invalid input! Please enter integers only.")