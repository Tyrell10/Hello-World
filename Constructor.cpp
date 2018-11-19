#include <iostream>
#include <string>

class Line{
    public:
        void setLength(double len);
        double getLength();
        Line(); // this is constructor declaration
        ~Line(); // this is destructor declaration
    private:
        double length;
};
Line::Line(){
    std::cout << "Object is being created" << std::endl;
    length = 0; // default length out of class
}
Line::~Line(){
    std::cout << "Object is being deleted" << std::endl;
}
void Line::setLength(double len){ // this is scope
    length = len;
}
double Line::getLength(){ // this is scope
    return length;
}

int main(){
    Line line; // this is var class
    line.setLength(6.0);

    std::cout << line.getLength() << std::endl;
    
    return 0;
}