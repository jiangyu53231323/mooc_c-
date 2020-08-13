#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle
{
    double radius;

public:
    Circle();
    Circle(double radius);
    double getArea();
    double getRadius() const;   //常函数，函数内不修改数据成员的值
    // void setRadius(double radius);
    Circle& setRadius(double radius);
};

#endif /* CIRCLE_H_ */