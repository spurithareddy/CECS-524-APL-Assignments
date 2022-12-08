import java.util.*;
import java.io.*;

public class Find extends Thread{
    public static  void main (String [] args) throws java.io.IOException {
        String keyword = args[0];
        int tcnt = args.length ;
        for (int i = 1; i < tcnt; i++) {
            File f = new File(args[i]);
             new Thread() {
                @Override
                public void run() {
                    try {
                        ArrayList<String> res = search(f, keyword);
                        System.out.print(f+":");
                        for(int i=0;i<res.size();i++)
                            System.out.println(res.get(i));
                    } catch (Exception e) {
                        System.out.println(e);
                    }
                }
            }.start();
        }


    }

    public static ArrayList<String> search(File f,String keyword) throws java.io.IOException
    {
        ArrayList<String> al=new ArrayList<>();
        try
        {
            FileReader fr = new FileReader(f);
            BufferedReader br = new BufferedReader(fr);
            String str=br.readLine();
            String [] words;

            while(str!=null)
            {
                words=str.split(" ");
                for (String s : words)
                {
                    if (s.contains(keyword))
                    {
                        al.add(str);
                    }
                }
                str=br.readLine();
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }

        return al;
    }

}
