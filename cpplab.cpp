#include<iostream>
using namespace std;
class test 
{
    int objno;
    static int objectcount;
    public:
    test()
    {
        objno=++objectcount;
    }
    ~test()
    {
        --objectcount;
    }
    void printobjectnumber()
    {
        cout<<"Objectnumber:"<<objno<<endl;;
    }
    static void printobjectcount()
    {
        cout<<"Objectcount:"<<objectcount<<endl;
    }
};
int test::objectcount;
int main()
{
    test t1,t2;
    test::printobjectcount();
    test t3;
    test::printobjectcount();
    t1.printobjectnumber();
    t2.printobjectnumber();
    t3.printobjectnumber();
    return 0;
}