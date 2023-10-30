// #include<iostream>
// using namespace std;

// class Complex{
//     private:

//     float real;
//     float img;

//  public:
//  void set_parameters(int real, int img){
//     this->real =real;
//     this->img = img;
// }
//     void SqdistancefromOrigin(){
//         float dist;
//         dist = real*real + img*img;
//         cout<<"The distance from origin is "<<dist; 
//     };
// };

// int main(){
//     Complex a,b;

//     a.set_parameters(3,4);
//     a.SqdistancefromOrigin();

//     return 0;
// }

#include<iostream>
using namespace std;

class Complex{
    private:

    float real;
    float img;

 public:
 void set_parameters(int real, int img){
    this->real =real;
    this->img = img;
}
    void SqdistancefromOrigin(){
        float dist;
        dist = real*real + img*img;
        cout<<"The distance from origin is "<<dist; 
    };
};
// I am a merchant and defining a class to store the amount which the user gives to me and the number of days it has been since thw uawe has given me money.
class New_account{
    public:
    int amount;
    int days;

// Since a constructor has no returrn type we don't need to write any data types
    New_account(int amount_initial, int days_initial){
        amount =amount_initial;
        days =days_initial;
        cout<<"The constructor us called now : "<<endl;
    }

    void print_account_details(){
        cout<<"The amount is "<<amount<<endl;
        cout<<"The number of days is  "<<days<<endl;

    }

    ~New_account(){
        cout<<"Now the destructor called";
    }
};
class mototbike{
    public:
    int num_wheels;
    int lights;
};
int main(){
    // Now I will try to do this while the object is being created itself
    New_account a(0,0);
    // The constructor *is beign called over here too
    a.print_account_details();
    
    // This function needs to ve called everytime the object is created to set the parameents
    New_account b(100,5);
    b.print_account_details();
    cout<<endl<<"Here all the fumction and calcualtion take place"<<endl;
    return 0;
}