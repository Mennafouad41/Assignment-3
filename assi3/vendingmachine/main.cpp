#include <iostream>

using namespace std;
class Market
{
protected:
    float cola=10;
    float sandwich=20;
    float chips=50;
    float Juice=88;
    float coffee=33;
    float tea=100;
    float biscuite=120;
    float chooclete=55;
    float cake=22;
    float branch=99;

public :
    // virtual  notcorrect()=0;




    void print ()
    {

        cerr<<"the products in the machine are : \n";
        cerr<<" Cola : 10$  . enter 1 if you want cola:\n ";
        cerr<<"Sandwich : 20$  .enter 2 if you want sandwich\n ";
        cerr<<"Chips : 50$  . enter 3 if you want chips:\n";
        cerr<<"Juice : 88$ . enter 4 if you want juice: \n";
        cerr<<" Coffee : 33$ . enter 5 if you want coffee: \n";
        cerr<<" Tee :100$ . enter 6 if you want tea: \n";
        cerr<<"Beiscuite : 120$ . enter 7 if you want beiscuite: \n";
        cerr<<"chooclete : 55$ . enter 8 if you want chooclete: \n";
        cerr<<" cake  : 22$ . enter 9 if you want cake: \n";
        cerr<<"Branch : 99$ . enter 10 if you want branch: \n";
    }
};

class Coins
{
protected :
    string product;
    float coinss;
public:
    void set3(string p,float c)
    {
        product=p;
        coinss=c;

    }

    string grt1()
    {
        return product;
    }
    float get2()
    {
        return coinss;
    }




};

class vending_machine:public Market
{


public:
    void f1(float coinn)
    {

        float carry=0;
        if(coinn>cola||coinn==cola)
        {
            carry=coinn-cola;
            cout<<"your carry is:"<<carry<<endl;

        }
    }

    void f2(float coinn )
    {
        float carry=0;
        if (coinn >sandwich || coinn ==sandwich )
        {
            carry=coinn-sandwich;

            cout<<endl<<"your carry is:"<<carry<<endl;

        }
    }


    void f3(float coinn )
    {
        float carry=0;
        if (coinn >chips || coinn ==chips )
        {
            carry=coinn-chips;

            cout<<endl<<"your carry is:"<<carry<<endl;

        }
    }
    void f4(float coinn )
    {
        float carry=0;
        if (coinn >Juice || coinn ==Juice)
        {
            carry=coinn-Juice;

            cout<<endl<<"your carry is:"<<carry<<endl;

        }
    }
    void f5(float coinn)
    {
        float carry=0;
        if(coinn >=coffee)
        {

            cout<<"Here are  your product";
            carry=coinn-coffee;
            cout<<"your carry is:"<<carry<<endl;

        }
    }


    void f6(float coinn)
    {
        float carry=0;
        if(coinn >=tea)
        {

            cout<<"Here are  your product";
            float carry=coinn-tea;
            cout<<"your carry is:"<<carry<<endl;

        }
    }
    void f7(float coinn)
    {
        float carry=0;
        if(coinn >=biscuite)
        {

            cout<<"Here are  your product";
            float carry=coinn-biscuite;
            cout<<"your carry is:"<<carry<<endl;

        }
    }
    void f8(float coinn)
    {
        float carry=0;
        if(coinn >=chooclete)
        {

            cout<<"Here are  your product";
            float carry=coinn-chooclete;
            cout<<"your carry is:"<<carry<<endl;

        }
    }
    void f9(float coinn)
    {
        float carry=0;
        if(coinn >=cake)
        {

            cout<<"Here are  your product";
            float carry=coinn-cake;
            cout<<"your carry is:"<<carry<<endl;

        }
    }
    void f10(float coinn)
    {
        float carry=0;
        if(coinn >=branch)
        {

            cout<<"Here are  your product";
            float carry=coinn-branch ;
            cout<<"your carry is:"<<carry<<endl;

        }
    }
    void f11(float coinn)
    {
        float carry=0;
        if(coinn ==0)
        {
            cout<<"Enter correct num!!";
        }
    }
};

int main()
{
    Market m;
    m.print();



    int choose;
    cout <<"enter your choice: "<<endl;
    cin >> choose;
    vending_machine s ;
    //cout<<"Enter the product which you want and the price:"<<endl;
    cout<<"Enter product: "<<endl;
    string s1;
    cin>>s1;
    cout<<"Enter coins: "<<endl;
    float t;
    cin >>t;


    if (choose ==1)
    {
        s.f1(t);
    }
    if(choose==2)
    {
        s.f2(t);
    }
    if(choose==3)
    {
        s.f3(t);
    }
    if(choose==4)
    {
        s.f4(t);
    }
    if(choose==5)
    {
        s.f5(t);
    }
    if(choose==6)
    {
        s.f6(t);
    }
    if(choose==7)
    {
        s.f7(t);
    }
    if(choose==8)
    {
        s.f8(t);
    }
    if(choose==9)
    {
        s.f9(t);
    }
    if(choose==10)
    {
        s.f10(t);
    }


}
