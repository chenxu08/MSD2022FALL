package webrefactor;

import java.io.InputStream;
import java.util.Scanner;

public class request {
    private InputStream is;
    public request(InputStream is){
        this.is=is;
    }
    public String gatname(){
    Scanner sc = new Scanner(is);
    String line =  sc.nextLine();
            System.out.println(line);
    String[] lines = line.split(" ");
    String name = lines[1];
    name = name.substring(1);
    return name;}
}
