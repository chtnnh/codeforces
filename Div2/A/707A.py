n, m = map(int, input().split())
color = [input().split() for x in range(n)]
foo = True
for i in color:
    if 'C' in i:
        foo = False
    elif 'M' in i:
        foo = False
    elif 'Y' in i:
        foo = False
if (foo):
    print("#Black&White\n")
else:
    print("#Color\n")
