import java.util.*;

class ExceptionDemo1XX
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int No1 = 0, No2 = 0, Ans = 0;

        try
        {
            System.out.println("Enter First Number :");
            No1 = sobj.nextInt();

            System.out.println("Enter Second Number :");
            No2 = sobj.nextInt();

            Ans = No1/No2;      // Exception Prone code
        }
            catch(ArithmeticException aobj)
            {
                System.out.println("Exception Occured : "+aobj);
            }
            catch(Exception eobj)
            {
                System.out.println("Inside Generic Catch : "+eobj);
            }
            finally
            {
                System.out.println("Inside Finally Block");
        
            }
        System.out.println("Division is :"+Ans);
        
    }
}