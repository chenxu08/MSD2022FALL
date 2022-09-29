import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
// Test Class
class FractionTest {
    @Test
    public void runATest() {
        // Qualify the assertEquals() with "Assertions." to say that it comes from the Assertions library.
        // Assertions library, as can be seen from the import, is: org.junit.jupiter.api.Assertions.
        Assertions.assertEquals(3,3); // Dummy assert... put real code here.
    }
    @Test
    public void testTimes() {
        Fractions f1 = new Fractions(1,2 );
        Fractions f2 = new Fractions( 1, 3 );
        Fractions f3 = f1.times( f2 );
        Fractions f4 = f1.plus(f2);
        Fractions f5 = f2.minus(f1);
        Fractions f6 = f1.dividedBy(f2);

        Assertions.assertEquals( f3.toString(), "1/6" );
        Assertions.assertEquals( f4.toString(), "5/6" );
        Assertions.assertEquals( f5.toString(), "-1/6" );
        Assertions.assertEquals( f6.toString(), "3/2" );

    }
}