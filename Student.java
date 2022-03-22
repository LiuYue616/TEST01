package com.test.hello;

import static com.test.hello.Tool.code;

public class Student extends People{
    private String stuid;
    public Student(){}
    public Student(String name)
    {
        this(name,0,code());
    }
    public Student(int age)
    {
        this("   ",age,code());
    }
    public Student(String name,int age,String stuid)
    {
        super(name,age);
        this.stuid=stuid;
    }
    public void setStuid(String stuid)
    {
        this.stuid=stuid;
    }
    public void get()
    {
        System.out.println(this.getName());
        System.out.println(this.getAge());
        System.out.println(this.stuid);
    }

    public static void main(String[] args) {
        Student s1=new Student();
        s1.setName("王小明");
        s1.setAge(20);
        s1.setStuid("2001485357");
        s1.get();
        enum Season {
            AUTUMN, SPRING, SUMMER, WINTER;
        }
    }
}
