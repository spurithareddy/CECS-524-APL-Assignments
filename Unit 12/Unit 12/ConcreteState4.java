public class ConcreteState4 implements AbstractState {
    private final static ConcreteState4 in = new ConcreteState4();
    private ConcreteState4(){}
    public static ConcreteState4 getInstance()
    {
        return in;
    }
    public void OnA(Context c)
    {
        System.out.println("input a");
        c.setState(ConcreteState3.getInstance());

    }
    public void OnB(Context c)
    {
        System.out.println("input b");
        c.setState(ConcreteState2.getInstance());
    }
}
