//#include <iostream>
//using namespace std;
//
//// 函数king：猴子选大王
//// 参数：a-猴子数组n-1个猴子分别占据下标为~n-1的位置，n-数组长度
//// 返回值：新猴王的下标序号
//int king(int a[], int n);
//
//int main()
//{
//    int n, a[1000], i;     // 定义变量及数组，n-猴子数量，a-猴子数组
//    cin >> n;     // 输入猴子数量，n>0
//
//    // 初始化猴子数组,n 个猴子分别占据 n 个位置
//    a[0] = 0; // 0号位置没有猴子
//    for (i = 1; i <= n; i++)
//        a[i] = i;
//
//    // 选大王啦
//    i = king(a, n);
//    cout << i << "号猴子是大王。" << endl;
//    return 0;
//}
//
//int king(int a[], int n)
//{
//    // 请在此添加代码，实现函数king
//    /********** Begin *********/
//    int j;
//    int k=0;
//    for (int i = 0; i < n+1; i++)
//        a[i] = 1;
//    for (int i = 1; i < n+1; i++)
//    {
//        j = 1;
//        while (j <= 3)
//        {
//            k = (k + 1) % n;
//                if (a[k] == 1) j++;
//        }
//        a[k] = 0;
//    }
//    return k;
//    /********** End **********/
//}