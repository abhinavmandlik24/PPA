import java.util.*;

class Demo 
{
     public static int Division(int No1, int No2) throws ArithmeticException
     {
        return No1/No2;
     }
    
}

class ExceptionDemo3X
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int No1 = 0, No2 = 0, Ans = 0;

        System.out.println("Enter First Number");
        No1 = sobj.nextInt();

        System.out.println("Enter Second Number");
        No2 = sobj.nextInt();

        Ans = Demo.Division(No1, No2);

        System.out.println("Division is :"+Ans);
        
    }
}