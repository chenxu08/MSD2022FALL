
import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        ServerSocket ss = new ServerSocket(8080);
        System.out.println("Listening....");
        while (true){
            Socket SocketToClient =ss.accept();
            InputStream is = SocketToClient.getInputStream();
            OutputStream os = SocketToClient.getOutputStream();

            Scanner sc = new Scanner(is);
            String line =  sc.nextLine();
            System.out.println(line);
            String[] lines = line.split(" ");
            String name = lines[1];
            name = name.substring(1);


            PrintWriter pw = new PrintWriter(os);
            if (name.matches("index.html")){
                InputStream i = new FileInputStream("/Users/xuchen/myGithubRepo/cs6011/week1/Day4/myhttpserver/src/index.html");
            BufferedReader fr =new BufferedReader(new InputStreamReader(i));
            pw.println("HTTP/1.1 200 OK");
            pw.println("Content-Type: text/html;charset=utf-8");
            pw.println("");

            String c =null;
            while((c=fr.readLine())!=null){
                pw.print(c);
            }
            pw.flush();
            fr.close();
            }
            else{
                InputStream i = new FileInputStream("/Users/xuchen/myGithubRepo/cs6011/week1/Day4/myhttpserver/src/404.html");
                BufferedReader fr =new BufferedReader(new InputStreamReader(i));
                pw.println("HTTP/1.1 404 File Not Found");
                pw.println("Content-Type: text/html;charset=utf-8");
                pw.println("");
                String c =null;
                while((c=fr.readLine())!=null){
                    pw.print(c);
                }
                fr.close();
                pw.flush();
            }
            pw.close();

            SocketToClient.close();


        }

    }
}