# Experiment 11
**Aim:** <br>
To study and implement Classes and Objects <br>
<br>
**Theory:** <br>
_Object Oriented Programming (OOP):_ <br>
Object-oriented programming is based on the concept of objects. In object-oriented programming data structures, or objects are defined, each with its own properties or attributes. <br>
To understand OOP better, let us understand some key concepts of OOPS <br>
<br>
_Class:_ <br>
A class is a collection of objects, a blueprint of objects defining the common attributes and behavior. This user-defined datatype holds its own instance variables, class variables and member functions which are accessed based on need. This can be done by creating a unique instance of that class.<br>
<br>
_Object:_ <br>
A unique instance of a data structure that's defined by its class. It is an identifiable entity with a set of characteristics and behavior. <br>
<br>
It is important to understand the difference between Procedural Oriented Programming (POP) ans Object Oriented Programming (OOP): <br>
<br>
_Inheritance:_ <br>
The mechanism which creates classes that are built upon existing classes, in a new implementation while maintaining the same behaviors. <br>
<br>
_Encapsulation:_ <br>
The mechanism which combines similar data and functions into a single unit called a class. It helps protect the data from any change. <br>
<br>
_Abstraction:_ <br>
The mechanism that depends on the separation of the interface and implementation details of the program. It provides only the required details to the user, hiding the technical internal ones. <br>
<br>
_Polymorphism:_ <br>
The mechanism which allows an object to be represented in various forms. <br>
<br>
Let us understand the difference between Procedural Oriented Programming (POP) and Object Oriented Programming (OOP): <br>
<br>
| Procedural Oriented Programming (POP)  |  Object Oriented Programming (OOP) |
| ------------- | ------------- |
| It is a top-down approach.  | Its is a bottom-up approach. |
| Program is divided into functions. | Program is divided into objects.  |
| It does not use access modifiers.  | Makes use of access modifiers like _public_, _private_ and _protected_.  |
| It is less secure  | It is more secure.  |
| Data can move freely from function to another function within programs. | Object can move freely within member functions. |
| It does not support inheritance. | It supports inheritance. |
<br>

Advantages of Object Oriented Programming: <br>
1. Reusability <br>
2. Data Redundancy <br>
3. Code Maintainance <br>
4. Flexibility <br>
5. Security <br>
This is why C++ is preffered over C as OOP is very advantageous. <br>
<br>

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
