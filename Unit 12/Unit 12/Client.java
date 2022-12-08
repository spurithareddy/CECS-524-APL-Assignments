import java.util.*;
public class Client {
    public static  void main(String [] args)
    {
        System.out.println("Enter input:    ");
        Scanner sc=new Scanner(System.in);
        String input=sc.nextLine();
        Context context=new Context();
        for(int i=0;i<input.length();i++)
        {
            switch (input.charAt(i))
            {
                case 'a':
                    context.onA(context);
                    break;

                case 'b':
                    context.onB(context);
                    break;

                default:
                    System.out.println("input "+input.charAt(i));
                    System.out.println("input not accepted");
                    System.exit(0);
                    break;
            }
        }
        System.out.println("Input Accepted");
    }
}
