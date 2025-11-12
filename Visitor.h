#include <iostream>
#include <string>
using namespace std;

class visitor{
    private:
    string visitorName;
    int ticketsBought;

    public:
    visitor(string v,int t):visitor(v),ticketsBought(t){}
    void displayInfo(){
     cout<<"name"<<visitorName<<endl;
     cout<<"tickets bought"<<ticketsBought<<endl;

    }
    
    }
}
