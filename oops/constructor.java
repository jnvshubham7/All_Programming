package oops;




class Student {
    String name;
    int age;
    boolean gender;

    // Default constructor
    public Student() {
        System.out.println("default constructor");
    }

    // Parameterized constructor
    public Student(String s, int a, boolean b) {
        name = s;
        age = a;
        gender = b;
        System.out.println("parameterized constructor");
    }

    // Copy constructor
    public Student(Student p) {
        name = p.name;
        age = p.age;
        gender = p.gender;
        System.out.println("copy constructor");
    }

    public void print() {
        System.out.println(name + " ");
        System.out.println(age + " ");
        System.out.println(gender + " ");
    }
}

public class constructor {
    public static void main(String[] args) {
        // Default constructor
        Student s1 = new Student();
        s1.print();

        // Parameterized constructor
        Student s2 = new Student("shubham", 21, true);
        s2.print();

        // Copy constructor
        Student s3 = new Student(s2);
        s3.print();
    }
}
