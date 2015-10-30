#include <bits/stdc++.h>

using namespace std;

#define D(x,cx,cy,dx,dy) cout<<"Case "<<x<<":\n"<<fixed<<setprecision(10)<<cx<<" "<<cy<<" "<<dx<<" "<<dy<<endl

double const PI  = acos(0.0) * 2.0;
double const PII = acos(0.0) * 4.0;

double angulo_circular(double a) { 
    return a >= 0 ? a : PII + a; 
}

struct Vector {
    double x;
    double y;
    Vector(){}
    Vector(double X, double Y) : x(X), y(Y) {}
    double normal() { return sqrt(x*x + y*y); }
    double angulo(const Vector &p) const {
        return angulo_circular(atan2(p.y, p.x) - atan2(y, x));
    }
};


int Ax, Ay, Bx, By, b, c, d;
double Cx, Cy, Dx, Dy;
Vector v_unit(1.0, 0.0);


void trapezium_Drawing(){
    Vector vectorA(Bx - Ax, By - Ay);

    double base = vectorA.normal() - c;
    double esquina = acos((b*b + base*base - d*d) / (2*b*base));
    double theta = v_unit.angulo(vectorA) + PI - esquina;

    Vector vectorB(b * cos(theta), b * sin(theta));

    Cx = Bx + vectorB.x;
    Cy = By + vectorB.y;

    theta = v_unit.angulo(vectorA) + PI;
    Vector vc(c * cos(theta), c * sin(theta));

    Dx = Cx + vc.x;
    Dy = Cy + vc.y;
}

int main(){
   int t;
   cin>>t;
   for (int k = 1; k <= t; k++){    
        cin>>Ax>>Ay>>Bx>>By>>b>>c>>d;
        trapezium_Drawing();
        D(k,Cx,Cy,Dx,Dy);
   }
    return 0;
}