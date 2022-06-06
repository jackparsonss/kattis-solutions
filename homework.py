string = input().strip()

sections = string.split(';')


total = 0
for section in sections:
    questions = section.split('-')
    if len(questions) == 1:
        total += 1
    else:
        total += 1 + int(questions[1]) - int(questions[0])

print(total)