// https://www.hackerearth.com/problem/algorithm/little-jhool-and-his-punishment/description/

importPackage(java.lang);
importPackage(java.io);

var br = new BufferedReader(new InputStreamReader(System['in']));

(function Main() {
  var t = Number(br.readLine());
  while (t--) {
    var n = Number(br.readLine());
    var people = br.readLine().split(' ');
    people = people.map(Number);
    var s = (Math.abs(people[0] - people[1]) > 1)? "Little Jhool" : "The teacher";
    print(s + " wins!");
  }
})();
