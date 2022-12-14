import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

public class Fractions implements Comparable{
    private long numerator;
    private long denominator;
    private long GCD(){
        long gcd = numerator;
        long remainder = denominator;
        while( remainder != 0 ) {
            long temp = remainder;
            remainder = gcd % remainder;
            gcd = temp;
        }
        return gcd;
    }
    public void reduce(){
        long gcd=GCD();
        numerator = numerator/gcd;
        denominator = denominator/ gcd;
        if (denominator<0){
            numerator=-numerator;
            denominator=-denominator;
        }
    }
    public Fractions(long numerator,long denominator){
        if (denominator<0){
            numerator =-numerator;
            denominator =-denominator;
        }
        this.numerator=numerator;
        this.denominator=denominator;
    }
    public Fractions plus(Fractions rhs){
        long n = numerator * rhs.denominator + rhs.numerator* denominator;
        long d = rhs.denominator * denominator;
        Fractions add = new Fractions(n,d);
        add.reduce();
        return add;
    }
    public Fractions minus(Fractions rhs){
        long n = numerator * rhs.denominator - rhs.numerator* denominator;
        long d = rhs.denominator * denominator;
        Fractions minus = new Fractions(n,d);
        minus.reduce();
        return minus;
    }
    public Fractions times(Fractions rhs){
        long n = numerator * rhs.numerator;
        long d = rhs.denominator * denominator;
        Fractions times = new Fractions(n,d);
        times.reduce();
        return times;

    }
    public Fractions reciprocal(){
        long temp=numerator;
        numerator=denominator;
        denominator=temp;
        Fractions reciprocal =new Fractions(numerator,denominator);
        reciprocal.reduce();
        return reciprocal;
    }
    public Fractions dividedBy(Fractions rhs){
        Fractions rhs1 = rhs.reciprocal();
        Fractions dividedBy = times(rhs1);
        dividedBy.reduce();
        return dividedBy;
    }
    public Double toDouble(){
        double n = numerator;
        double d = denominator;
        return n / d;
    }

    public String toString(){
        return numerator+"/"+denominator;
    }
    public int r(){
        int r = (int) (numerator);
        return r;
    }
    @Override
    public int compareTo(Object o) {
        Fractions f = (Fractions)(o);
        return this.r()-f.r();
    }

    public static void main(String[] args) {
        Fractions a = new Fractions(-1,-3);
        Fractions b = new Fractions(2,3);
        Fractions c=a.minus(b);
//        try {
//            long a =10;
//            long b = 0;
//            Fractions d = new Fractions(a,b);
//            long c=a/b;
//            System.out.println(d.toString());
//        }catch(ArithmeticException e){
////            System.out.println("Exception thrown :"+e);
//            e.printStackTrace();
//        }


        System.out.println(a);
        System.out.println(a.denominator);
        System.out.println(a.toDouble());
        System.out.println(c.toString());
        ArrayList arr = new ArrayList();
        arr.add(a);
        arr.add(b);
        arr.add(c);
        System.out.println(arr);
        Collections.sort(arr);
        System.out.println(arr);

    }


}
