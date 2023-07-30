#include<bits/stdc++.h>
using namespace std;
// no of Destructor calls depends on no of objects Entity[10] = 10 times const/destruc invoked
class Entity{
    public:
    Entity()
    {
        cout<<"object is created successfully"<<endl;
    }
    ~Entity()
    {
        cout<<"object is deleted successfully"<<endl;
    }
};
int main()
{
       Entity E2,E3;
       cout<<endl;
    //above code destroyed by compiler after reaching end
    
    return 0;
}