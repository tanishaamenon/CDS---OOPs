# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 5.0,b = 3.0,l = 8.0;
    double volume()
    {
        double vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}