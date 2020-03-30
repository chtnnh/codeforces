number, iterations = [int(x) for x in input().split()]
# iterations = int(input())

while iterations > 0:
    if (number % 10) != 0: # while the digit is not 0, subtract normally
        number -= 1
    else:
        number /= int(10) # divide by 10 when number ends with 0
    iterations -= 1
print(int(number))
