#include<iostream>
using namespace std;

int main(){
    struct apparel{
        string name;
        string type;
        float cost;
        bool available;
    };
    
    struct apparel app;
    app.name = "Adidas Red Sweater";
    app.type = "Sweater";
    app.cost = 2500.00;
    app.available = true;
    
    cout<<app.name<<"\n"<<app.type<<"\n"<<app.cost<<"\n"<<app.available<<"\n";
    
    struct apparel *p = &app;
    p->name = "";
    p->type = "";
    p->cost = 0.0;
    p->available = false;
    
    cout<<app.name<<"\n"<<app.type<<"\n"<<app.cost<<"\n"<<app.available<<"\n";
    
    system("pause");
    return 0;
}       
