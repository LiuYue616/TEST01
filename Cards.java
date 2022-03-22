package com.test.hello;

import java.util.ArrayList;

public class Cards
{
    private Cards(){}
    private static Cards instance ;
    public static Cards getInstance()
    {
        if(instance==null)
        {
            instance = new Cards();
        }
        return instance;
    }
    public static ArrayList<String> cards;
    static {
        cards = new ArrayList<String>();
        String[] color = {"♠", "♡", "♣", "♢"};
        String[] pai = {"3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2"};
        for (String s : pai)
            for (String t : color)
                cards.add(t+s);
        cards.add("大王");
        cards.add("小王");
    }

}
