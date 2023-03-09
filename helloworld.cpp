#include <iostream>

class TestClass 
{
    int _testNum;

    public:

        TestClass( int testNumber )
        {   
            _testNum =  testNumber;
        }

        ~TestClass(){
            std::cout << "Obj deleted" << std::endl;
        }

}
int main(){

    std::cout << "Hello World!" << std::endl;
    
    for (int i = 0; i < 99; ++i)
        i *= i;

    std::cout << i << std::endl;
    
    TestClass testObj(i);

    TestClass *ptr = nullptr;

    ptr = new TestClass(i/2);

    delete ptr;

    return 0;
}
