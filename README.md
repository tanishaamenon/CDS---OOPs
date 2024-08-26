# Experiment 11
**Aim:** <br>
To study and implement Classes and Objects <br>
<br>
**Theory:** <br>
_Object Oriented Programming (OOP):_ <br>
Object-oriented programming is based on the concept of objects. In object-oriented programming data structures, or objects are defined, each with its own properties or attributes. <br>
To understand OOP better, let us understand some key concepts of OOPS
_Class:_ <br>
A class is a collection of objects, a blueprint of objects defining the common attributes and behavior. This user-defined datatype holds its own instance variables, class variables and member functions which are accessed based on need. This can be done by creating a unique instance of that class.<br>
_Object:_ <br>
A unique instance of a data structure that's defined by its class. It is an identifiable entity with a set of characteristics and behavior. <br>


**Code:** <br>
<br>
a.<br>

```
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 2.0;
    double b = 3.0;
    double l = 4.0;
};
int main()
{
  cuboid c1;
  double vol = c1.h * c1.b * c1.l;
  cout<<"Volume "<<vol<<endl;
}
    
```
<br>
b.<br>

```
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
    
```
<br>
c.<br>

```
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
    
```
<br>
d.<br>

```
# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 7.0,b = 8.0,l = 9.0;
    public:
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
    double v = c1.volume();
    c1.disp(v);
  
}
    
```
<br>
e.<br>

```
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
    
```
<br>

**Outputs:**  <br>
<br>
a.<br>
![exp11a output](https://github.com/tanishaamenon/CDS---OOPs/blob/main/exp11a.JPG) <br>
b.<br>
![exp11b output](https://github.com/tanishaamenon/CDS---OOPs/blob/main/exp11b.JPG) <br>
c.<br>
![exp11c output](https://github.com/tanishaamenon/CDS---OOPs/blob/main/exp11c.JPG) <br>
d.<br>
![exp11d output](https://github.com/tanishaamenon/CDS---OOPs/blob/main/exp11d.JPG) <br>
e.<br>
![exp11e output](https://github.com/tanishaamenon/CDS---OOPs/blob/main/exp11e.JPG) <br>


<br>

**Conclusion:** <br>
&#8594; We learnt about OOP in C++. <br>
&#8594; We learnt the use case of classes and objects in C++. <br>
*******
<br>
