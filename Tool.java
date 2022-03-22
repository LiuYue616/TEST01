package com.test.hello;


import java.util.Random;

public class Tool {
    private static int number;
    static{
        number =0;
    }

    public static String Code(int n)
    {
        //if(number>3) return "";
        String chars="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        Random r = new Random();
        String code= "";
        for(int i =0;i<n;i++)
        {
            int index = r.nextInt(chars.length());
            code = code + chars.charAt(index);
        }
        //number++;
        return code;
    }
    public static String code()
    {
        Random r = new Random();
        String code= "";
        for(int i =0;i<8;i++)
        {
            int index=r.nextInt(10)+48;
            String e= String.valueOf(index);
            code = code + e;
        }
        return code;

    }
    public static void fix()
    {
        number=0;
    }

}
