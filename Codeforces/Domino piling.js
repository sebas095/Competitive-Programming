// http://codeforces.com/problemset/problem/50/A

var s = readline();

var mn = s.split(" ").reduce(function(prev, curr) {
  return Number(prev) * Number(curr);
}, "1");

print(Math.floor(mn / 2));
