class Base
{
    public int i,j;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }

    public void gun()
    {
        System.out.println("Inside Base gun");
    }
}

class Derived extends Base
{
    public int x,y;

    public Derived()
    {
       System.out.println("Inside Derived Constructor"); 
    }

    public void sun()
    {
        System.out.println("Inside Derived sun");
    }
}

class DerivedX extends Derived
{
    public int a;

    public DerivedX()
    {
       System.out.println("Inside DerivedX Constructor"); 
    }

    public void run()
    {
        System.out.println("Inside DerivedX run");
    }
}


class Multilevel 
{
    public static void main(String A[])
    {
        DerivedX dobj = new DerivedX();

        dobj.fun();
        dobj.gun();
        dobj.sun();
        dobj.run();
    }
}
