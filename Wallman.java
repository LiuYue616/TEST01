package com.test.hello;

public interface Wallman {
    void wash();
    void rule();
    default void oput()
    {
        System.out.println("default带方法体的方法");
        oput2();
    }
    static void oput1()
    {
        System.out.println("static带方法体的方法");
    }
    private void oput2()
    {
        System.out.println("private带方法体的方法");
    }
}
