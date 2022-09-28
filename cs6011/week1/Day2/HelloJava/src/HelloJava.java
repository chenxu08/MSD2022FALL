import java.util.Scanner;

//import java.util.Scanner;
public class HelloJava {
    public static void main(String[] args) {

        System.out.println("Hello world!");
        int [] array = {1,2,3,4,5,6,7,8,9,10};
        int sum=0;
        for (int i=0;i<array.length;i++){
            System.out.print(array[i]+" ");
            sum = sum +array[i];
        }
        System.out.println();
        System.out.println("the sum is: "+sum+" ");
        Scanner s = new Scanner(System.in);
        System.out.println("Please enter your name : ");
        String name =s.next();
        System.out.println("Please enter your age : ");
        int age = s.nextInt();
        if (age >= 18){ System.out.println( "the user is old enough to vote.");
        }else{System.out.println( "the user is not old enough to vote.");}
        if (age >= 80){ System.out.println("the user is greatest generation.");
        }else if (age>=60 && age <80){System.out.println( "the user is baby boomers.");
        }else if (age>=40 && age < 60){System.out.println( "the user is generation X.");
        }else if (age>=20 && age <40){System.out.println( "the user is millennial.");
        }else {System.out.println( "the user is iGen.");}
    }
}