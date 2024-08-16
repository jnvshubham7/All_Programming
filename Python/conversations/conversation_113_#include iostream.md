## USER
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number()
    {
        cout << "The roll number is " << roll_number << endl;
    
    }
};




class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "The marks obtained in maths are: " << maths << endl;
        cout << "The marks obtained in physics are: " << physics << endl;
    }
};


class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};



int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display_results();
    return 0;
}












// #include <iostream>
// using namespace std;

// class Student
// {
// protected:
//     int roll_number;

// public:
//     void set_roll_number(int);
//     void get_roll_number(void);
// };

// void Student ::set_roll_number(int r)
// {
//     roll_number = r;
// }

// void Student ::get_roll_number()
// {
//     cout << "The roll number is " << roll_number << endl;
// }
// class Exam : public Student
// {
// protected:
//     float maths;
//     float physics;

// public:
//     void set_marks(float, float);
//     void get_marks(void);
// };

// void Exam ::set_marks(float m1, float m2)
// {
//     maths = m1;
//     physics = m2;
// }

// void Exam ::get_marks()
// {
//     cout << "The marks obtained in maths are: " << maths << endl;
//     cout << "The marks obtained in physics are: " << physics << endl;
// }
// class Result : public Exam
// {
//     float percentage;

// public:
//     void display_results()
//     {
//         get_roll_number();
//         get_marks();
//         cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
//     }
// };
// int main()
// {
//     Result harry;
//     harry.set_roll_number(420);
//     harry.set_marks(94.0, 90.0);
//     harry.display_results();
//     return 0;
// }










create multiple inheratance from this 

## ASSISTANT
In the provided code, there is already multiple inheritance, as the `Result` class inherits from the `Exam` class, and the `Exam` class inherits from the `Student` class. This creates a chain of inheritance where `Result` indirectly inherits from both `Exam` and `Student`.

Here's the modified code with another class `Sports` added to showcase multiple inheritance:

```cpp
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number()
    {
        cout << "The roll number is " << roll_number << endl;
    }
};

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "The marks obtained in maths are: " << maths << endl;
        cout << "The marks obtained in physics are: " << physics << endl;
    }
};

class Sports
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void get_score()
    {
        cout << "The sports score is " << score << endl;
    }
};

class Result : public Exam, public Sports
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        get_score();
        cout << "Your result is " << (maths + physics + score) / 3 << "%" << endl;
    }
};

int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.set_score(9.5);
    harry.display_results();
    return 0;
}
```

In this example, the `Result` class inherits from both the `Exam` class and the `Sports` class, demonstrating multiple inheritance.