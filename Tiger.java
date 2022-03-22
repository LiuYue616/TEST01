package com.test.hello;

public class Tiger extends Animal implements Wallman{
    @Override
    public void run()
    {
        int speed = 50;
        System.out.println(speed);
    }

    public static void main(String[] args) {
        Animal t=new Tiger();
        Wallman t1=new Tiger();
        t.run();
        System.out.println(t.name);
    }

    @Override
    public void wash() {

    }

    @Override
    public void rule() {

    }
}
