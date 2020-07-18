n = int(input())
arr = input().split(" ")
arr.sort()
count = n
for i in range(1, n - 1, 1):
    if (arr[i] == arr[0] or arr[i] == arr[n - 1]):
        count -= 1;
print(count)
