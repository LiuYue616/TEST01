#include <iostream>
#include <string>
using namespace std;

/********* Begin *********/
class Matrix
{
    //矩阵类的声明
private:
    int m_r;
    int m_c;
    int a[3][3];
public:
    friend Matrix operator+(Matrix& m1, Matrix& m2);
    friend Matrix operator-(Matrix& m1, Matrix& m2);
    friend Matrix operator*(Matrix& m1, Matrix& m2);
    //矩阵类的定义
    Matrix(int r, int c)
    {
        m_r = r;
        m_c = c;
        Fill(0);
    }
    Matrix()
    {
        m_r = 0;
        m_c = 0;
        Fill(0);
    }
    void Fill(int value)
    {
        for (int i = 0; i < m_r; ++i)
        {
            for (int j = 0; j < m_c; ++j)
                a[i][j] = value;
        }
    }
    void Set(int r, int c, int value)
    {
        a[r][c] = value;
    }
    int Get(int r, int c)
    {
        return a[r][c];
    }
    void Print()
    {
        for (int i = 0; i < m_r; ++i)
        {
            for (int j = 0; j < m_c; ++j)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};
Matrix operator+(Matrix& m1, Matrix& m2)
{
    //实现矩阵加法
    Matrix p(m1.m_r, m1.m_c);
    for (int i = 0; i < m1.m_r; ++i)
    {
        for (int j = 0; j < m1.m_c; ++j)
        {
            p.a[i][j] = m1.a[i][j] + m2.a[i][j];
        }
    }
    return p;
}

Matrix operator-(Matrix& m1, Matrix& m2)
{
    //实现矩阵减法
    Matrix p(m1.m_r, m1.m_c);
    for (int i = 0; i < m1.m_r; ++i)
    {
        for (int j = 0; j < m1.m_c; ++j)
        {
            p.a[i][j] = m1.a[i][j] - m2.a[i][j];
        }
    }
    return p;
}

Matrix operator*(Matrix& m1, Matrix& m2)
{
    //实现矩阵乘法
    Matrix p(m1.m_r, m2.m_c);
    int o = 0;
    for (int i = 0; i < m1.m_c; ++i)
    {
        o = o + m1.a[0][i] * m2.a[i][0];
    }
    p.a[0][0] = o;
    o = 0;
    for (int i = 0; i < m1.m_c; ++i)
    {
        o = o + m1.a[1][i] * m2.a[i][1];
    }
    p.a[1][1] = o;
    o = 0;
    for (int i = 0; i < m1.m_c; ++i)
    {
        o = o + m1.a[0][i] * m2.a[i][1];
    }
    p.a[0][1] = o;
    o = 0;
    for (int i = 0; i < m1.m_c; ++i)
    {
        o = o + m1.a[1][i] * m2.a[i][0];
    }
    p.a[1][0] = o;
    o = 0;
    return p;
}
//int main()
//{
//    int i, j;
//    cin >> i >> j;
//    Matrix m1(i, j), m2(i, j), m3(j, i);
//    m1.Fill(1);
//    m2.Fill(2);
//    m3.Fill(0);
//    for (int s = 0; s < i; s++) {
//        for (int c = 0; c < j; c++) {
//            if (s == c)
//                m3.Set(s, c, s + 1);
//        }
//    }
//    //m1.Print();
//    //m2.Print();
//    //m3.Print();
//    cout << "m1 + m2 :" << endl;
//    (m1 + m2).Print();
//    cout << "m1 - m2 :" << endl;
//    (m1 - m2).Print();
//    cout << "m1 * m3 :" << endl;
//    (m1 * m3).Print();
//
//}