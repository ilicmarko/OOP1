

public class glavna {
    public static void main(String[] args) {
        Motor m1 = new Motor("Golf MK4",325,5);
        Motor m2 = new Motor("Golof MK4",500,3.8);
        MotorSaTurbinom mt1 = new MotorSaTurbinom("Golf MK5", 338.1,6,75);
        MotorSaTurbinom mt2 = new MotorSaTurbinom("Golf MK6", 483.1,5,40);

        System.out.println(m1.toString());
        System.out.println(m2.toString());
        System.out.println(mt1.toString());
        System.out.println(mt2.toString());

        System.out.println(mt1.compareTo(mt2));
    }
}
