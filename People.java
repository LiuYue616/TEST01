package com.test.hello;

public class People {


    private String name;
    private int age;
    People(){}
    People(String name,int age)
    {
        this.name=name;
        this.age=age;
    }
    public void setName(String name)
    {
        this.name=name;
    }
    public String getName()
    {
        return name;
    }
    public void setAge(int age)
    {
        this.age=age;
    }
    public int getAge()
    {
        return age;
    }
}
