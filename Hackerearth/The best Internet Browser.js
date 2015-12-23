// https://www.hackerearth.com/problem/algorithm/the-best-internet-browser-3/

importPackage(java.io);
importPackage(java.lang);

var br = new BufferedReader(new InputStreamReader(System['in']));
var tc, webSite, num, den;
tc = Number(br.readLine());

while (tc--) {
  webSite = br.readLine().split("");
  var tmp = webSite.slice(5, -4);
  var url = tmp.filter(function(elem) {
    return (elem != 'a' && elem != 'e' && elem != 'i' && elem != 'o' && elem != 'u');
  });

  num = url.length + 4;
  den = webSite.length - 1;

  print(num + "/" + den);

}
