public class ConcreteState2 implements AbstractState{
    private final static ConcreteState2 in = new ConcreteState2();
    private ConcreteState2(){}
    public static ConcreteState2 getInstance()
    {
        return in;
    }
    public void OnA(Context c)
    {
        System.out.println("input a");
        c.setState(ConcreteState1.getInstance());

    }
    public void OnB(Context c)
    {
        System.out.println("input b");
        c.setState(ConcreteState4.getInstance());
    }
}
