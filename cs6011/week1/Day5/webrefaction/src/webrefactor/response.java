package webrefactor;

import java.io.*;

public class response {
    OutputStream os;
    public response(OutputStream os){
        this.os=os;
    }
    public void getrs(OutputStream os, String name ){
        try {
            PrintWriter pw = new PrintWriter(os);
            if (name.matches("index.html")) {
                InputStream i = new FileInputStream("/Users/xuchen/myGithubRepo/cs6011/week1/Day4/myhttpserver/src/index.html");
                BufferedReader fr = new BufferedReader(new InputStreamReader(i));
                pw.println("HTTP/1.1 200 OK");
                pw.println("Content-Type: text/html;charset=utf-8");
                pw.println("");

                String c = null;
                while ((c = fr.readLine()) != null) {
                    pw.print(c);
                }
                pw.flush();
                fr.close();
            } else {
                InputStream i = new FileInputStream("/Users/xuchen/myGithubRepo/cs6011/week1/Day4/myhttpserver/src/404.html");
                BufferedReader fr = new BufferedReader(new InputStreamReader(i));
                pw.println("HTTP/1.1 404 File Not Found");
                pw.println("Content-Type: text/html;charset=utf-8");
                pw.println("");
                String c = null;
                while ((c = fr.readLine()) != null) {
                    pw.print(c);
                }
                fr.close();
                pw.flush();
            }
            pw.close();
        }catch(IOException e){
            e.printStackTrace();
        }
    }
}
