// https://www.hackerearth.com/code-monk-sorting/algorithm/chandu-and-his-girlfriend/

importPackage(java.io);
importPackage(java.lang);

var oo =  200000000
var br = new BufferedReader( new InputStreamReader(System['in']) );

function merge(A, p, q, r) {
	var n1, n2, i = 0, j = 0;
	n1 = q - p + 1;
	n2 = r - q;

	var L = A.slice(p, p + n1);
	var R = A.slice(q + 1, q + n2 + 1);

  L.unshift(0);
	L.push(oo);

  R.unshift(0);
	R.push(oo);

	i = j = 1;

	for(var k = p; k <= r; k++){
		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
	}

}

function mergeSort(A, p, r) {
	var q;
	if(p < r){
		q = (p + r)/2;
		mergeSort(A, p, q);
		mergeSort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

function cmp(a, b) {
  return parseInt(b) - parseInt(a);
}

var t = parseInt(br.readLine());

while (t--) {
  /* Merge sort practice
  var n = parseInt(br.readLine());
  var tmp = br.readLine().split(" ");
  var A = [0].concat(tmp.map(Number));

  mergeSort(A, 1, n);
  A = A.slice(1);
  A.reverse();
  A = A.join(" ");*/

  var n = parseInt(br.readLine());
  var A = br.readLine().split(" ");

  A.sort(cmp);
  A = A.join(" ");

  print(A);
}
