public class ConcreteState1 implements AbstractState{
    private final static ConcreteState1 in = new ConcreteState1();
    private ConcreteState1(){}
    public static ConcreteState1 getInstance()
    {
        return in;
    }
    public void OnA(Context c)
    {
        System.out.println("input a");
        c.setState(ConcreteState2.getInstance());

    }
    public void OnB(Context c)
    {
        System.out.println("input b");
        c.setState(ConcreteState3.getInstance());
    }
}
