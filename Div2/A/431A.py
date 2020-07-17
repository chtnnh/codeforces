a, b, c, d = (input().split(" "))
steps = input()
cal = 0
for i in steps:
    if (i == "1"):
        cal += int(a)
    elif (i == "2"):
        cal += int(b)
    elif (i == "3"):
        cal += int(c)
    else:
        cal += int(d)
print(cal)
