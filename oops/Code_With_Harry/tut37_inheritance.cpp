// #include <iostream>
// using namespace std;

// // Base Class
// class Employee
// {
// public:
//     int id;
//     float salary;

//     // Parameterized constructor to initialize id and set a default salary
//     Employee(int inpId)
//     {
//         id = inpId;
//         salary = 34.0;
//     }

//     // Default constructor
//     Employee() {}
// };

// // Derived class Programmer inheriting from Employee
// class Programmer : public Employee
// {
// public:
//     int languageCode;

//     // Parameterized constructor to initialize id and set a default language code
//     Programmer(int inpId)
//     {
//         id = inpId;
//         languageCode = 9;
//     }

//     // Member function to display id
//     void getData()
//     {
//         cout << id << endl;
//     }
// };

// int main()
// {
//     // Creating instances of the Employee class
//     Employee harry(1), rohan(2);

//     // Displaying salaries of Employee instances
//     cout << harry.salary << endl;
//     cout << rohan.salary << endl;

//     // Creating an instance of the Programmer class
//     Programmer skillF(10);

//     // Displaying language code and id of Programmer instance
//     cout << skillF.languageCode << endl;
//     cout << skillF.id << endl;

//     // Calling getData() function of Programmer class to display id
//     skillF.getData();

//     return 0;
// }





//inheritance in c++

// #include<bits/stdc++.h>
// using namespace std;

// class animal{
//     public:

//     void eat()
//     {
//         cout<<"eat"<<endl;
//     }

    

// };


// class dog : public animal{

//     public:

//     void bark()
//     {
//         cout<<"bark"<<endl;
//     }


// };





// int main(){

//     dog d1;
//     d1.eat();
//     d1.bark();


    


//     return 0;
// }




//muliple inheritance 

// #include<bits/stdc++.h>
// using namespace std;


// class animal{
//     public:
//     void eat()
//     {
//         cout<<"eat"<<endl;
//     }
// };


// class 




// int main(){

    


//     return 0;
// }




//single inheritance

// #include<bits/stdc++.h>
// using namespace std;


// class A{
//     public:
//     void funcA()
//     {
//         cout<<"Base class function"<<endl;
//     }
// };

// class B: public A{
//     public:

//     void funcB()
//     {
//        cout<<"Inherted from class A"<<endl; 
    
//     }
// };



// int main(){


//     B obj;

//     obj.funcA();
//     obj.funcB();



    


//     return 0;
// }




// multiple inheritance

// #include<bits/stdc++.h>
// using namespace std;

// class A{
//     public:
//     void funcA(){
//         cout<<"Base class A"<<endl;
//     }
// };

// class B{
//     public:
//     void funcB() {
//         cout<<"Base class B"<<endl;
//     }
// };

// class C: public A, public B{
//     public:
//     void funcC() {
//         cout<<"Inherited form class C"<<endl;
//     }
// };




// int main(){


//     C obj;

//     obj.A::funcA();
//     obj.B::funcB();

//     obj.funcC();


    


//     return 0;
// }






//multilevel inheritance

// #include<bits/stdc++.h>
// using namespace std;

// class A{
//     public:
//     void funcA(){
//         cout<<"Base class A"<<endl;
//     }
// };

// class B: public A{
//     public:
//     void funcB()
//     {
//         cout<<"Inherited from class A"<<endl;
//     }
// };


// class C : public B{
//     public:
//     void funcC()
//     {
//         cout<<"Inherited from class B"<<endl;
//     }
// };







// int main(){


//     C obj;

//     obj.funcA();
//     obj.funcB();
//     obj.funcC();



    


//     return 0;
// }




//hierarchical inheritance

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void funcA(){
        cout<<"Base class A"<<endl;
    }
};


class B: public A{
    public:
    void funcB()
    {
        cout<<"Inherited from class A"<<endl;
    }
};


class C: public A{
    public:
    void funcC()
    {
        cout<<"Inherited from class A"<<endl;
    }
};




int main(){

    C obj;

    obj.funcA();
    obj.funcC();

    B obj1;

    obj1.funcA();
    obj1.funcB();

    

    


    return 0;
}