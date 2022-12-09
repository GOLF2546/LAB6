#include <iostream>
#include <cmath>
using namespace std;
const double PI = 22.00/7.00;
double deg2rad(float a){
    return a*(PI/180.00);
}
double  rad2deg(double b){
    return b*(180.00/PI);
}
double findXComponent(double x , double y ,double z,double t){
    double a,b,c;
    a = x*cos(z);
    b = y*cos(t);
    c = a+b;
    return c;
}
double findYComponent(double x , double y ,double z,double t){
    double a,b,c;
    a = x*sin(z);
    b = y*sin(t);
    c = a+b;
    return c;
}
double pythagoras(double a , double b){
    double c;
    c = sqrt(pow(a,2)+pow(b,2));
    return c;
}
void showResult(double a,double b){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << a << endl;
    cout << "Direction of the resultant vector (deg) = " << b << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
