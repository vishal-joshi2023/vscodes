#include<iostream>
using namespace std;

class Test
{
private:
int x;
public:
Test(int x) { this->x = x; }
//copy const like
void change(Test *t) { *this = *t; }

void print() { cout << "x = " << x << endl; }
};

int main()
{
Test obj(5);
Test *ptr = new Test (10);
obj.print();
ptr->print();

obj.change(ptr);
obj.print();
return 0;
}
