#include<iostream>
using namespace std;

// We achieve this using something called a "Class";
// A class is a user defined datatype which can be customized however we want.

class student {
    public:
    string name;
    int mids;
    float ends;
    bool pre_abs;

    void display_total_marks(){
    int total_marks;
    total_marks = 5*mids + 10*ends;
    cout<<"The total marks of "<<name<<" is "<<total_marks<<endl;
}
};

class vehicle{
    public:
    string car_name;
    string tyre_name;
    int number_of_tyers;
    int number_of_seats;
};


int main(){
    // There are a class of 30 students and each student has the following data associated with him:

    student a; // here a,b,c are object of student
    int d,e,f;
    vehicle b;
    a.name = "Aman king";
    a.ends = 3.88;
    a.mids =12;
    a.pre_abs = 1;
    cout<<a.name<<endl;
    a.display_total_marks();
    b.car_name = "Rolls Royal";
    b.tyre_name = "MRF";
    b.number_of_seats =4;
    b.number_of_tyers =4;

}
