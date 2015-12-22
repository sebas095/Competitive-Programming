// https://www.hackerearth.com/code-monk-array-strings/algorithm/terrible-chandu/

importPackage(java.io);
importPackage(java.lang);

var br = new BufferedReader(new InputStreamReader(System['in']));
var t = parseInt(br.readLine());

// Creamos el metodo reverse para la clase String
String.prototype.reverse = function() {
  return this.split("").reverse().join("");
};

while (t--) {
  var s = br.readLine();
  print(s.reverse());
}
