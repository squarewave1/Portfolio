public class MyCircularBufferTest {
    public static void main(String[] args) throws Exception
{

    // Creating the Circular Buffer
    CircularBuffer < Integer > cb = new CircularBuffer < > (10);

    // Adding elements to the circular Buffer
    cb.add(5);
    cb.add(6);
    cb.add(7);
    cb.add(1);
    cb.add(4);

    // Printing the elements
    System.out.println(
        "The elements are printed in the order :-");
    System.out.println(cb.get());
    System.out.println(cb.get());
    System.out.println(cb.get());
    System.out.println(cb.get());
    System.out.println(cb.get());
}
}
