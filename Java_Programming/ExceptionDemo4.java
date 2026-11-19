import java.util.*;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}
class ExceptionDemo4
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Age = 0;
        System.out.println("Enter your age:");
        Age = sobj.nextInt();


        try
        {
        if (Age < 18) 
        {
            throw new AgeInvalid("Your are under age "); 
        }
        else
        {
            System.out.println("Welcome to _______");
        }
        }
        catch(AgeInvalid aobj)
        {
            System.out.println("Exception Occured due to age you can't vist the website");
        }

    }
}