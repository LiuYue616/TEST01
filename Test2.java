package com.test.hello.d2;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Test2 {
    public static void main(String[] args) {
        JFrame win =new JFrame("登录界面");
        JPanel panel=new JPanel();
        win.add(panel);
        JButton btn=new JButton("登录");
        JButton btn1=new JButton("结束");
        btn.addActionListener((ActionEvent e) -> JOptionPane.showMessageDialog(win,"点我一下，说明爱我"));
        btn1.addActionListener((ActionEvent e) -> System.exit(0));
        panel.add(btn);
        panel.add(btn1);
        win.setSize(1280,720);
        win.setLocationRelativeTo(null);
        win.setVisible(true);
    }
}
