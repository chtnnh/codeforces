seq = input()
instructions = input()

iterator = 0
count = 1
for i in instructions:
    if (i == seq[iterator]):
        count += 1
        iterator += 1
print(count)
