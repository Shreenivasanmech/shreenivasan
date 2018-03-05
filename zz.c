import java.io.*;
import java.util.Scanner;
public class Sha
{
  public static void main(String[]args)
    {
    Scanner data=new Scanner(System.in);
    char[] a =data.next().toCharArray();
      char[] b =data.next().toCharArray(); 
        for(int i=0;i<=a.length;i++)    {
    if(a[i]==b[i])
    System.out.print(a[i]);
            
                
            
        }
    }
return 0;
}
