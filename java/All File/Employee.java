
public class Employee {
	
	
	public String name;
	public String address;
	public int numbers;
	public int SSN;
	public double salary;
	public void mailCheck()
	
	{
		 System.out.println("Mailing check to " + name + "\n" + address);
		 
	}
	public double computePay()
	{
		return salary/52;
	}

}
