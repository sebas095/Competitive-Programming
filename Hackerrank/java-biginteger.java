//Java Biginteger
//https://www.hackerrank.com/challenges/java-biginteger

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger a, b;
        String x, y;
        
        x = sc.nextLine();
        y = sc.nextLine();
        a = new BigInteger(x);
        b = new BigInteger(y);
        
        System.out.println(a.add(b));
        System.out.println(a.multiply(b));
    }
}