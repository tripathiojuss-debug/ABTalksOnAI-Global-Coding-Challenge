try:
    n = int(input("Enter number of elements: "))
    print("Enter elements:")
    arr = list(map(int, input().split()))

    if len(arr) != n:
        print("Invalid input! Number of elements does not match.")
        exit()

    nums = []
    for i in range(n):
        nums.append((arr[i], i))

    target = int(input("Enter target value: "))

    nums.sort()

    left = 0
    right = n - 1

    while left < right:
        s = nums[left][0] + nums[right][0]

        if s == target:
            print("Result:")
            print("Index 1:", nums[left][1])
            print("Index 2:", nums[right][1])
            break
        elif s < target:
            left += 1
        else:
            right -= 1
    else:
        print("No valid pair found.")

except ValueError:
    print("Invalid input! Please enter integers only.")