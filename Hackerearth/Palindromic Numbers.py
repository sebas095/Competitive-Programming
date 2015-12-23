# https://www.hackerearth.com/problem/algorithm/palindromic-numbers-7/

class Palindrome:
    def __init__(self):
        self.pal = [0] * 100009

    def reverse(self, s):
        return s[ : : -1]

    def isPal(self, s):
        inv = self.reverse(s)
        if s == inv:
            return True
        return False

    def calculate(self):
        for i in range(len(self.pal)):
            if self.isPal(str(i)):
                self.pal[i] = 1

        for i in range(1, len(self.pal)):
            self.pal[i] += self.pal[i - 1]

    def solve(self, a, b):
        if a == 0: return self.pal[b]
        return self.pal[b] - self.pal[a - 1]

if __name__ == "__main__":
    palNum = Palindrome()
    palNum.calculate()
    t = input()

    while (t > 0):
        t -= 1
        a, b = map(int, raw_input().split())
        print palNum.solve(a, b)
