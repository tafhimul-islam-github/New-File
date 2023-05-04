#include <iostream>
using namespace std;

class student {
    string name[100];
    int roll;

public:
    void get(string a, int b);
    void put(void){
        cin >> name>>endl;
        cout << "Name"<<name<<endl;
        cin >> roll>>endl;
        cout << "Roll"<<roll<<endl;
    }
};

void student :: get(char a, int b){
    name =a;
    roll=b;
}

int main(){
    student s1;
    cout << "\nStudent S1 "<<endl;

    s1.get(char a,int b);
    s1.put();

    student s2;
    cout<< "\nStudent S2 "<<endl;

    s2.get(char a,int b);
    s2.put();

    return 0;
}
