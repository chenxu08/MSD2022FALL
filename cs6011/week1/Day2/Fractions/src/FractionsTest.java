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

        Assertions.assertEquals( f3.toString(), "1/6" );
    }
}