package IPA3;
import java.util.*;
public class IPA3 {
    public static void main(String[] args) {
        Student[] student = new Student[4];
        Scanner sc = new Scanner(System.in);
        for(int i=0; i<student.length; i++)
        {
            int a = sc.nextInt();sc.nextLine();
            String b = sc.nextLine();
            String c = sc.nextLine();
            double d = sc.nextDouble();sc.nextLine();
            boolean e = sc.nextBoolean(); 

            student[i] = new Student(a,b,c,d,e);
        }



       int cnt =  findCountOfDayscholarStudents(student );

     Student[] st =   findStudentwithSecondHighestScore(student);
       


       if(cnt==0)
       {


       }

       else {

        System.out.println(cnt);


       }





       
    }

    private static Student[] findStudentwithSecondHighestScore(Student[] student) {

        Student[] st = new Student[0];

        for(Student st:student)
        {
            if(s.getDayScholar() && s.getScore()>80)
            {
                st = 

            }
        }

        

        



    }

    private static int findCountOfDayscholarStudents(Student[] st) {

        int cnt=0;

        for(Student s:st)
        {
            if(s.getDayScholar() && s.getScore()>80)
            {
                cnt++;
            }
        }

        return cnt;





    }
   
}
class Student
{
    private int rollNo;
    private String name;
    private String branch;
    private double score;
    private boolean dayScholar;

// constructor   

    public Student(int rollNo, String name, String branch, double score, boolean dayScholar)
    {
        this.rollNo = rollNo;
        this.name = name;
        this.branch = branch;
        this.score = score;
        this.dayScholar = dayScholar;
    }

// getter and setter to access by main method

    public int getRollNo()
    {
        return rollNo;
    }
    public void setRollNo(int rollNo)
    {
        this.rollNo = rollNo;
    }
    public String getName()
    {
        return name;
    }
    public void setName(String name)
    {
        this.name= name;
    }
    public String getBranch()
    {
        return branch;
    }
    public void setBranch(String branch)
    {
        this.branch = branch;
    }
    public double getScore()
    {
        return score;
    }
    public void setScore(double score)
    {
        this.score = score;
    }
    public boolean getDayScholar()
    {
        return dayScholar;
    }
    public void setDayScholar(boolean dayScholar)
    {
        this.dayScholar = dayScholar;
    }

}