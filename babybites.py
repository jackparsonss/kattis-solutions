n = int(input().strip())
line = input().split()
counter = 0

fishy = False

for i in range(n):
    counter += 1
    if line[i] != "mumble" and int(line[i]) != counter:
        fishy = True


if fishy:
    print("something is fishy")
elif counter == n:
    print("makes sense")
else:
    print("makes sense")
