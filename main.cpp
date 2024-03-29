#include <iostream>

using namespace std;

class Example {
public:
    Example(int y = 10): data(y) {
        // empty body
    } // end Example constructor

    int getIncrementedData() const {
        return data;
    } // end function getIncrementedData

    static int getCount() {
        return count;
    } // end function getCount

private:
    int data;
    static int count;
}; // end class Example

// Define the static member variable outside the class
int Example::count = 0;

int main() {
    Example obj(5);

    cout << "Incremented data: " << obj.getIncrementedData() << endl;

    cout << "Count: " << Example::getCount() << endl;

    return 0;
}
