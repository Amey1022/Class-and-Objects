#include<iostream>
using namespace std;
class Volume
{
    public:
    float h,b,l;
    void input()
    {
        cout<<"enter height of cuboid:";
        cin>>h;
        cout<<"enter breadth of cuboid:";
        cin>>b;
        cout<<"enter length of cuboid:";
        cin>>l;
    }
    void output()
    {
        cout<<calculation();
    }
    float calculation();
};
 float Volume::calculation()
    {
        float volume;
        volume=h*b*l;
        return volume;
    }
int main()
{
    Volume v1;
        v1.input();
        v1.calculation();
        v1.output();
}