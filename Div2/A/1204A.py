time = input()
if (len(time) % 2 == 0):
    print(int(len(time) / 2))
else:
    if ('1' in time[1:]):
        print(int((len(time) + 1) / 2))
    else:
        print(int(len(time) / 2))
