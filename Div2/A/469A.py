n = int(input())
arr1 = input().split(" ")
arr2 = input().split(" ")

arr1[0] , arr2[0] = 0, 0
for i in arr1:
    if (i not in arr2):
        arr2.append(i)
if (len(arr2) == n + 1):
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
