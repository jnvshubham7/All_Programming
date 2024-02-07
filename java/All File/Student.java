//
//package oom;
//
//import java.util.Scanner;
//
//class Student{
//    int roll;
//    float height;
//    public void getData(){
//        System.out.println("Roll number is " + roll + " and Height is " + height);
//    }
//    Student(int r, float h){
//        roll = r;
//        height = h;
//    }
//}
//
//public class que2 {
//    static float avght(Student st[]){
//        float sum=0;
//        for (int i=0; i<3; i++){
//            sum+=st[i].height;
//        }
//        sum=(float) sum/3;
//        return sum;
//    }
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        Student st[] = new Student[3];
//        int r;
//        float h;
//        int k=0;
//        for (int i=0; i<3; i++){
//            System.out.println("Enter roll and height of student " + ++k);
//            r = sc.nextInt();
//            h = sc.nextFloat();
//           st[i] = new Student(r,h);
//        }
//        k=0;
//        for (int i=0; i<3; i++){
//            System.out.print("For student " + ++k + " : ");
//            st[i].getData();
//        }
//        float avg = avght(st);
//        System.out.println("the average height is "+ avg);
//
//    }
//}
//
//
//
//
//
//
//
//
//
//// public class Student {
////     private int rollNumber;
////     private int height;
//
////     public Student(int rollNumber, int height) {
////         this.rollNumber = rollNumber;
////         this.height = height;
////     }
//
////     public void displayDetails(){
////         System.out.println("Roll number => "+rollNumber);
////         System.out.println("Height => "+height);
////     }
//
////     public static void calculateAverage(Student[] arr){
////         int average,sum=0;
////         for(int i = 0; i < arr.length;i++){
////             sum += arr[i].height;
////         }
////         average = sum/arr.length;
////         System.out.println("Average => "+average);
////     }
//// }
//
//// public class main {
//
////     public static void main(String[] args) {
//
////         Student student1 = new Student(81,6);
////         Student student2 = new Student(81,8);
////         Student student3 = new Student(81,10);
//
////         Student[] arr = {student1,student2,student3};
//
////      Student student = new Student(81,6);
////      student.displayDetails();
////      Student.calculateAverage(arr);
//
////     }
//
//// }