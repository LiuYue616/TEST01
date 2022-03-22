package com.test.hello.d1;

public class Mouse implements USB{
    private String name;
    public Mouse() {
    }

    public Mouse(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void use()
    {
        System.out.println(name+"在使用中");
    }
    @Override
    public void connect() {
        System.out.println(name+"成功连接");
    }

    @Override
    public void disconnect() {
        System.out.println(name+"断开连接");
    }
}
