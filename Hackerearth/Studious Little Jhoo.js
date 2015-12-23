// https://www.hackerearth.com/problem/algorithm/studious-little-jhool/description/

importPackage(java.io);
importPackage(java.lang);

var br = new BufferedReader(new InputStreamReader(System['in']));
var t = Number(br.readLine());

function solve(n) {
  var ans = 1000000
  for (var i = 0; i < 113; i++) {
    for (var j = 0; j < 113; j++) {
      if (i * 10 + j * 12 == n)
        ans = Math.min(ans, i + j);
    }
  }
  return ans;
}

function main() {
  while (t--) {
      var n = Number(br.readLine());
      var ans = solve(n);
      (ans == 1000000)? print("-1") : print(ans);
  }
}

main();
