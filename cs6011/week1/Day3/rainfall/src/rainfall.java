import java.io.*;
import java.util.Scanner;
import java.util.ArrayList;

public class rainfall {
    private String filename;


    rainfall(String filename) {
        this.filename=filename;
    }
    ArrayList makearray() throws FileNotFoundException {
        ArrayList<String> rainfall=new ArrayList<String>();
        Scanner fileReader = new Scanner( new FileInputStream( filename ) );

        while (fileReader.hasNextLine()){
            String s = fileReader.nextLine();
            rainfall.add(s);
        }
        return rainfall;
    }
    double allaverage (ArrayList<String> rainfall){
        double sum = 0;
        int count = 0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            sum = sum+r;
            count ++;
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double one_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("January")){
            sum = sum+r;
            count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double two_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("February")){
                sum = sum+r;
                count ++;
            }

        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double three_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("March")){
                sum = sum+r;
                count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double four_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("April")){
                sum = sum+r;
                count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double five_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("May")){
                sum = sum+r;
                count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double six_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("June")){
                sum = sum+r;
                count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double seven_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("July")){
                sum = sum+r;
                count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double eight_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("August")){
                sum = sum+r;
                count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double nine_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("September")){
                sum = sum+r;
                count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double ten_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("October")){
                sum = sum+r;
                count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double eleven_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("November")){
                sum = sum+r;
                count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }
    double twelve_average (ArrayList<String> rainfall){
        double sum =0;
        int count =0;
        for(int i = 1; i < rainfall.size();i++){
            String [] a = rainfall.get(i).split("\\s+");
            double r = Double.parseDouble(a[2]);
            if (a[0].matches("December")){
                sum = sum+r;
                count ++;
            }
        }
        double average = sum/count;
        String str=String.format("%.2f",average);
        average =Double.parseDouble(str);
        return average;
    }



    public static void main(String[] args) throws IOException {
        rainfall a=new rainfall("Macon.txt");
        FileWriter myWriter = new FileWriter("rainfall_results.txt");
        ArrayList<String> b=a.makearray();
        myWriter.write(b.get(0)+"\n");

        myWriter.write("The overall average rainfall amount is "+a.allaverage(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for January is "+a.one_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for February is "+a.two_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for March is "+a.three_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for April is "+a.four_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for May is "+a.five_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for June is "+a.six_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for July is "+a.seven_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for August is "+a.eight_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for September is "+a.nine_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for October is "+a.ten_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for November is "+a.eleven_average(a.makearray())+" inches.\n");
        myWriter.write("The average rainfall amount for December is "+a.twelve_average(a.makearray())+" inches.\n");

        myWriter.close();






    }


}