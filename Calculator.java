import java.util.Scanner;

class Calculator {
		public static void main (String [] args)
		{
			Scanner sc = new Scanner(System.in);
			int i, choice;
			float a[], b[], c[], d[];
			System.out.print("Select 1 for Seidel method and 2 for Jacobi's method\n");
			choice = sc.nextInt();
			switch(choice){
					case 1:
							for(i=0; i<4; i++ ) {
									System.out.print("Enter the equation " + i + " enter the value of ax + by + cz + = d : ");
									System.out.print("a = ");
									a[i] = sc.nextFloat();
									System.out.println("b = ");
									System.out.println("c = ");
									System.out.println("d = ");
							}
							break;
					default:
							break;
			}

		}
}
