#include <iostream>
using namespace std;
int main() {
    cout<<"Enter your name"<<endl;
    string x;
    cin>>x;
    cout<<"Welcome " + x<<endl;
    cout<<endl;

    cout<<"Enter your ID"<<endl;
    string i;
    cin>>i;
    cout<<"Your ID is " + i<<endl;
    cout<<endl;

    cout<<"Enter first variable "<<endl;
    int y;
    cin>>y;
    cout<<"Enter second variable "<<endl;
    int z;
    cin>>z;
    cout<<endl;

    int var1 = y;
    int var2 = z;
    int sum = var1 + var2;
    int diff = abs(var1 - var2);
    int prod = var1 * var2;

    cout<<"First variable is " + to_string(y)<<endl;//Javada bu komut (to string kastediyorum) vardı. Bu bilgiyi kullanarak böyle yaptım
    cout<<"Second variable is " + to_string(z)<<endl;
    cout<<"Sum is " + to_string(sum)<<endl;
    cout<<"Diff variable is " + to_string(diff)<<endl;
    cout<<"Prod variable is " + to_string(prod)<<endl;
    cout<<endl;

    cout<<"Enter name of the student "<<endl;
    string v;
    cin>>v;
    cout<<"Enter lab grade "<<endl;
    int lab_;
    cin>>lab_;
    cout<<"Enter midterm grade "<<endl;
    int midterm_;
    cin>>midterm_;
    cout<<"Enter final grade "<<endl;
    int final_;
    cin>>final_;
    cout<<endl;

    int total = (lab_*25/100) + (midterm_*35/100) + (final_*40/100);

    cout<<("Name: " + v)<<endl;
    cout<<("Lab grade: " + to_string(lab_))<<endl;//Javada bu komut (to string kastediyorum) vardı. Bu bilgiyi kullanarak böyle yaptım
    cout<<("Midterm grade " + to_string(midterm_))<<endl;
    cout<<("Final grade " + to_string(final_))<<endl;
    cout<<("Last score is " + to_string(total))<<endl;
    cout<<endl;

    cout<<"*\n**\n***\n**\n*";
    return 0;
}