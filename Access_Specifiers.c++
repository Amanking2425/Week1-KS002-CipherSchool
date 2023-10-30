#include<iostream>
#include<string>
using namespace std;

class student{
    public:

    string name;
    int attendence;
    float total_marks;

    void calculate_percentage(){
        cout<<total_marks<<"%";
    }
};

class Bank_client{
    public:
    string name;
    int credit_number;
    int cvv;
    int user_name;
    string password;
};
int main(){
    Bank_client a,b,c;
    a.name ="Aman";
    a.password = "Enjoyc++";
    a.cvv = 788;
    a.credit_number = 74837;

    cout<<"The password of rohit is :"<<a.password<<endl;
    cout<<a.cvv<<endl;
    cout<<a.credit_number;
    return 0;
}