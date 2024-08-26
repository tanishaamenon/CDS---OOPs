# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h,b,l;
    void input()
    {
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the breadth: ";
        cin>>b;
        cout<<"Enter the height: ";
        cin>>h;
    }
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    c1.input();
    double v = c1.volume();
    c1.disp(v);
  
}