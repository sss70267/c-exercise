#include<iostream>
#include<cstdlib>
using namespace std;

class Caaa
{
    public:
        int num1,num2;

    Caaa()
    {
     num1 = 1;
     num2 = 2;
    }
    Caaa(int a,int b):num1(a),num2(b)
    {
    }
    void show_num()
    {
        cout << "num1=" << num1 << " ";
        cout << "num2=" << num2 << endl;
        
        return;
    }
};

class Cbbb : public Caaa
{
    
    public:
        void set_num(int nu1,int nu2)
        {
            num1=nu1;
            num2=nu2;

            return;   
        }
    Cbbb():Caaa()
    {}
    Cbbb(int a,int b):Caaa(num1,num2)
    {
        num1=a;
        num2=b;
    }
    
};

int main(void)
{
//  題目9
    cout << "題目9" << endl;
    Cbbb obj;
    obj.set_num(10,20);
    obj.show_num();
//  題目10
    cout << "題目10" << endl;
    Caaa obj1;
    Caaa obj2(10,15);
    Cbbb obj3;
    Cbbb obj4;
    Cbbb obj5(10,10);

    obj1.show_num();
    obj2.show_num();
    obj3.show_num();
    
    cout << "例題17輸出" << endl;
    obj4.show_num();

    cout << "例題18輸出" << endl;
    obj5.show_num();

    system("pause");
    return 0;
}

/* 牛刀小試 第十六章 第9.10.17題   
第9題
建立父類別 Caaa 資料成員 num1,num2
建立子類別 繼承 Caaa show_num函數顯示數值
子類別 Cbbb 利用set_num() 設值num1=10,num=20

第10題
Caaa 設定沒引數建構元 num1=1,num2=2
Caaa 設定建構元Caaa(int a int b) num1=a num2=b
建立boj1,obj2(10,15),obj3 並用show_num印出

例題17
使Cbbb類別的預設值為Caaa()預設建構元的初值

例題18
在子類別裡撰寫呼叫父類別有引數的建構元Caaa()設定初值

題目9
num1=10 num2=20
題目10
num1=1 num2=2
num1=10 num2=15
num1=1 num2=2
例題17輸出
num1=1 num2=2
例題18輸出
num1=10 num2=10
*/