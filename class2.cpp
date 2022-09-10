#include<iostream>
using namespace std;
class manager{
    int eid;
    char name[30];
    int age;
    public:
    void getdata();
    void putdata();
};
void manager::getdata()
{
    cout<<endl;
    cout<<"Enter the employee id:";
    cin>>eid;
    cout<<"Enter the name of the manager:";
    gets(name);
    cout<<"Enter the age of the manager:";
    cin>>age;
    cout<<endl;

}
void manager::putdata()
{   cout<<endl;
    cout<<"Manager Id: "<<eid<<endl;
    cout<<"Manager Name: "<<name<<endl;
    cout<<"Manager age: "<<age<<endl;
    cout<<endl;
}


int main()
{
    int n;
    cout<<"How many manager's details do you want to insert?";
    cin>>n;
    manager emp[n];
    cout<<"--------------------------------------------"<<endl;
    cout<<"Enter the details here:"<<endl;
    for(int i=0;i<n;i++)
    {
        emp[i].getdata();
    }
    cout<<endl<<"--------------------------------------------"<<endl<<"Manager data:"<<endl;
    for(int i=0;i<n;i++)
    {
        emp[i].putdata();
    }

}