// package oom.tut_7;
class Animal{
    public void announce(){
        System.out.println("This is the Animal class");
    }
}

class Dog extends Animal{
    @Override
    public void announce(){
        System.out.println("This is the dog class");
    }
}
class PuppyDog extends Dog{

}
public class tut7_Que1 {
    public static void main(String[] args) {
        PuppyDog pd = new PuppyDog();
        pd.announce();
    }
}