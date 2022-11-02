package webrefactor;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class Main {
    public static void main(String[] args) {
        try {
            ServerSocket ss = new ServerSocket(8080);
            System.out.println("Listening....");
            while (true) {
                Socket SocketToClient = ss.accept();
                InputStream is = SocketToClient.getInputStream();
                OutputStream os = SocketToClient.getOutputStream();
                request rq = new request(is);
                String name = rq.gatname();
                response rs = new response(os);
                rs.getrs(os,name);
            }
        }
        catch (IOException e){
        e.printStackTrace();
        System.exit(1);
    }

    }
}