class Wektor2D
{
    double x;
    double y;

    public:
    // Tutaj napisz implementacje klasy Wektor2D
    Wektor2D(double x_kon = 0., double y_kon = 0.)
    { 
        x = x_kon;
        y = y_kon;
    }

    void setX(double a) { x = a; }
    void setY(double b) { y = b; }

    double getX() { return x; }
    double getY() { return y; }
};

Wektor2D operator+(Wektor2D a, Wektor2D b)
{
    return Wektor2D{a.getX() + b.getX(), a.getY() + b.getY()};
}

double operator*(Wektor2D a, Wektor2D b)
{
    return a.getX() * b.getX() + a.getY() * b.getY();
}