# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 20.0,b = 13.0,l = 17.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}