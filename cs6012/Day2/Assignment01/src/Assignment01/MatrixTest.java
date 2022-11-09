package Assignment01;

import org.junit.Assert;

import static org.junit.jupiter.api.Assertions.*;

class MatrixTest {
    int[][] a = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    String A="1 2 3 \n4 5 6 \n7 8 9 \n";
    int[][] b = {{1, 2, 3},{4, 8, 6},{7, 8, 9}};

    int[][] c = {{1, 2, 3},{4, 5, 6}};
    int[][] d = {{7,8},{9,10},{11,12}};
    int[][] e = {{58,64},{139,154}};
    int[][] f={{2,4,6},{8,10,12},{14,16,18}};
    Matrix origin;
    Matrix other;
    Matrix other2;
    Matrix other3;
    Matrix other4;
    Matrix other5;
    Matrix other6;


    @org.junit.jupiter.api.BeforeEach
    void setUp() {
         origin = new Matrix(a);
         other = new Matrix(a);
         other2= new Matrix(b);
         other3= new Matrix(c);
         other4= new Matrix(d);
         other5= new Matrix(e);
         other6= new Matrix(f);


    }

    @org.junit.jupiter.api.AfterEach
    void tearDown() {
    }

    @org.junit.jupiter.api.Test
    void testEquals() {
        Assert.assertTrue(origin.equals(other));// If two matrix is same, it should be correct.
        Assert.assertFalse(origin.equals(other2));
        // tow matrix have same row and column, but the item data is not equal. It should be false.
        Assert.assertFalse(origin.equals(other3));// if two matrix have different row or column, it should be false.
    }

    @org.junit.jupiter.api.Test
    void testToString() {
        assertEquals(A,origin.toString());

    }

    @org.junit.jupiter.api.Test
    void times() {
        assertEquals(other5,other3.times(other4));//the example in assignment to ensure the correct answer
        assertEquals(null,other3.times(other5));//[2*3] * [2*2] it should be null;

    }

    @org.junit.jupiter.api.Test
    void plus() {
        assertEquals(other6,origin.plus(origin)); // to ensure the result is correctly.
        assertEquals(null,other3.plus(other4));//if they have different row or column, the result should be null
    }
}