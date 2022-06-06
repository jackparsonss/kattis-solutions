n = int(input().strip())

for _ in range(n):
    nums = input().split("+")
    if len(nums) == 1:
        print("skipped")
    else:
        print(int(nums[0]) + int(nums[1]))
