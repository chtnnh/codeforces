n = int(input())
word = input()

word = word.lower()
if (n < 26):
    print("NO")
else:
    for i in 'abcdefghijklmnopqrstuvwxyz':
        if (i not in word):
            print("NO")
            break
    else:
        print("YES")
