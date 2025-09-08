
class MyCircularBuffer <E> {


    Node<E> head;

    Node<E> tail;
    int volume = 0;
    int capacity = 0;

    // Constructor
    CircularBuffer(int capacity) {
        this.capacity = capacity;
    }

    // Addition of Elements
    public void add(E element) throws Exception

    volume++;

    // Checking if the buffer is full
    if (volume == capacity) {
        throw new Exception("Buffer Overflow");
    }

    // Checking if the buffer is empty
    if (head == null) {
        head = new Node<>(element);
        tail = head;
        return;
    }

    Node < E > temp = new Node<>(element);

    temp.next = head;

    tail.next = temp;

    tail = temp;

}
public E get() throws Exception
{

    if (volume == 0) {
        throw new Exception("Empty Buffer");
    }

    E element = head.data;

    head = head.next;

    tail.next = head;
    volume--;
    if (volume == 0) {

        head = tail = null;
    }
    return element;
}


public E peek() throws Exception
{

    if (volume == 0) {
        throw new Exception("Empty Buffer");
    }
    E element = head.data;
    return element;
}
{
public boolean isEmpty() { return volume == 0; }

public int volume() { return volume; }
}


