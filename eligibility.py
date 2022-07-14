n = int(input().strip())

for _ in range(n):
    name, began, bday, courses = input().split(" ")
    began_year = int(began.split("/")[0])
    byear = int(bday.split("/")[0])
    if began_year >= 2010 or byear >= 1991:
        print(f"{name} eligible")
    elif int(courses) >= 41:
        print(f"{name} ineligible")
    else:
        print(f"{name} coach petitions")
