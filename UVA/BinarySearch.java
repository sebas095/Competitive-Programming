/*    
    http://coj.uci.cu/24h/problem.xhtml?pid=3299&lang=es
    Iterativo:
    BinarySearch(A[0..N-1], value) {
      low = 0
      high = N - 1
      while (low <= high) {
          // invariants: value > A[i] for all i < low
                         value < A[i] for all i > high
          mid = (low + high) / 2
          if (A[mid] > value)
              high = mid - 1
          else if (A[mid] < value)
              low = mid + 1
          else
              return mid
      }
      return not_found // value would be inserted at index "low"
  }
    
  Recursivo:
  // initially called with low = 0, high = N-1
  BinarySearch(A[0..N-1], value, low, high) {
      // invariants: value > A[i] for all i < low
                     value < A[i] for all i > high
      if (high < low)
          return not_found // value would be inserted at index "low"
      mid = (low + high) / 2
      if (A[mid] > value)
          return BinarySearch(A, value, low, mid-1)
      else if (A[mid] < value)
          return BinarySearch(A, value, mid+1, high)
      else
          return mid
  }
*/
    public static int BinarySearch(BigInteger valueinf, BigInteger valuesup, BigInteger n){
        BigInteger m = BigInteger.ZERO;
        BigInteger fact1 = BigInteger.ZERO;
        BigInteger fact2 = BigInteger.ZERO;
        BigInteger triangularTemp = BigInteger.ZERO;
        BigInteger dos = new BigInteger("2");
        if(valueinf.compareTo(valuesup) > 0)
            return -1;
        else{
            m = valueinf.add(valuesup); 
            m = m.divide(dos);//m = (inf + sup)/2
            fact1 = m;
            fact2 = m.add(BigInteger.ONE);
            triangularTemp = fact1.multiply(fact2);
            triangularTemp = triangularTemp.divide(dos); //n*(n+1)/2
            if(triangularTemp.compareTo(n) == 0)
                return 1;
            else{
                if(n.compareTo(triangularTemp) == 1) // temp < n
                    return BinarySearch(m.add(BigInteger.ONE), valuesup, n);
                else 
                    return BinarySearch(valueinf, m.subtract(BigInteger.ONE), n);
            } 
        }
    }
   
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger tNum;
        BigInteger tres = new BigInteger("3");
        while(true){
            tNum = new BigInteger(sc.next());
            if(tNum.compareTo(BigInteger.ZERO)== 0)break;
            if(tNum.compareTo(BigInteger.ONE) == 0){
                System.out.println("YES");
                continue;
            }
            if(BinarySearch(BigInteger.ONE, tNum.divide(tres), tNum) == 1)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
