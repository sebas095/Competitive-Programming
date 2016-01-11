class BGift:
    def __init__(self, n, m):
        self.bucket = [0] * m
        self.m = m
        self.n = n

    def calculate(self):
        v = map(int, raw_input().split())
        for i in xrange(len(v)):
            ai = v[i]
            self.bucket[ai -1] += 1

    def answer(self):
        ans = 0
        for i in xrange(self.m):
            for j in xrange(i + 1, self.m):
                ans += self.bucket[i] * self.bucket[j]
        return ans

if __name__ == "__main__":
    n, m = map(int, raw_input().split())
    best = BGift(n, m)
    best.calculate()
    print(best.answer())
