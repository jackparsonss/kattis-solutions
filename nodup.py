from calendar import c


words = input().strip().split()

dict = {}
for word in words:
    if word in dict:
        dict[word] += 1
    else:
        dict[word] = 1

check = False
for value in dict.values():
    if value > 1:
        check = True

if check:
    print("no")
else:
    print("yes")
    