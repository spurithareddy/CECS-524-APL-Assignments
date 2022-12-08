public class ConcreteState3 implements AbstractState
{
    private final static ConcreteState3 in = new ConcreteState3();
    private ConcreteState3(){}
    public static ConcreteState3 getInstance()
    {
        return in;
    }
    public void OnA(Context c)
    {
        System.out.println("input a");
        c.setState(ConcreteState4.getInstance());
    }
    public void OnB(Context c)
    {
        System.out.println("input b");
        c.setState(ConcreteState1.getInstance());
    }
}
