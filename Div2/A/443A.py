string = input()
string2 = ''

for i in string:
    if ((i >= 'a' and i <= 'z') or (i >= 'A' and i <= 'Z')):
        if (i not in string2):
            string2 += i
print(len(string2))
