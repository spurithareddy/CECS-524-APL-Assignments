public class Context {
    AbstractState abs;
    public Context()
    {
        this.abs = ConcreteState1.getInstance();

    }

    public void onA(Context c)
    {
        abs.OnA(c);
    }

    public void onB(Context c)
    {

        abs.OnB(c);

    }
    public void setState(final AbstractState state)
    {
        this.abs = state;
        System.out.println("state: "+abs.getClass().getName());
    }


}
