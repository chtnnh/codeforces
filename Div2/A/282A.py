x = 0
for i in range(int(input())):
    string = input()
    if '-' in string:
        x -= 1;
    else:
        x += 1;
print(x)
