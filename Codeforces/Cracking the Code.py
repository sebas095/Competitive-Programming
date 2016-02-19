numbers = raw_input()

a = numbers[0]
b = numbers[1]
c = numbers[2]
d = numbers[3]
e = numbers[4]

ans = a + c + e + d + b
numbers = str(int(ans) ** 5)

ans = numbers[len(numbers) - 5 : ]
print ans
