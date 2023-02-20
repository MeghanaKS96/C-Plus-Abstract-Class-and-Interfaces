//Abstract Class
class Shape {
    virtual double area()=0;
    
};

//Interface
class Polygon {
    virtual int num_sides()=0;
};


//Interface
class Circumference {
    virtual double circumference()=0;
};

//Derived Class
class Circle :public Shape, public Circumference{
    protected:
    int radius;
   public:
   Circle(int r){
       radius = r;
   }
      double area() { 
          double area = 3.14 * radius * radius;
         return (area); 
      }

      double circumference()
      {
          return (2*3.14*radius);
      }
};

//Derived Class
class Square :public Shape,public Circumference,public Polygon{
    protected:
    int side;
    
public:
Square(int s){
        side=s;
    }
      double area() { 
         return (side * side); 
      }

      public:
      int num_sides() { 
         return (4); 
      }

      double circumference()
      {
          return (side * 4);
      }
} ;

//Derived Class
class Ellipse :public Shape{
    protected:
    int aaxis;
    int baxis;

public:
Ellipse(int a,int b){
    aaxis = a;
    baxis = b;
}
      double area() { 
          double area = aaxis * baxis * 3.14;
         return (area); 
      }
};
class Triangle :public Shape,public Circumference,public Polygon{
    protected:
    int side1;
    int side2;
    int side3;
    int width;
    int height;
public:
Triangle(int s1,int s2,int s3,int w,int h)
{
    side1 = s1;
    side2 = s2;
    side3 = s3;
    width = w;
    height = h;
}
      double area() { 
         double area = width * height / 2;
         return (area); 
      }

      public:
      int num_sides() { 
         return (3); 
      }

      double circumference()
      {
          return (side1+side2+side3);
      }

};

