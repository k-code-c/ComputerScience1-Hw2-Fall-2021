#include <iostream>
#include <cmath>
using std:: cout;
using std:: cin;
using std:: endl;
using namespace std;


int main() {
    double rectangleArea{};
    double circleArea{};
    double width;
    double length;
    double rectangle, circle;
    double radius;
    string userChoice;
    
    
    
    rectangleArea = static_cast<double>(width*length);
    cout << " Do you want the area of a Circle or Rectangle: ";
    cin >> userChoice;
    //this indcates that the user should pick a shape
    if (userChoice == "rectangle") {
        cout << " You chose to calculate the area of a Rectangle. \n";
         cout << " Enter the width of the rectangle: ";
           cin >> width;
               
//enter the length
           cout<< " Enter the length of the rectagnle: ";
           cin>> length;
           
           rectangleArea = width*length;
           
           std::cout << " The computed area of the rectanlge is: " << rectangleArea << endl;
           //if stanments for the rectangle
           if (rectangleArea <= 49)
           
               cout<< rectangleArea << " is less than or equal to 49 units^2, Small Geometry. \n";
           
           if (rectangleArea > 49 && rectangleArea <= 183.5)
               cout<< rectangleArea << " is greater than 49 units^2 but less than 183.5 units^2, Medium Geometry. \n";
           // demosntrates that the geometry is large
           if (rectangleArea > 183.5)
               cout << rectangleArea << " is greater than 185.3 units^2, Large Geometry. \n";
        
    }
    else {
        cout << " You chose to calculate the area of a Circle. \n";
        
        cout<< " Enter the radius of the circle: ";
        cin>> radius;
        // area of a circle using PI
        circleArea = M_PI * (radius * radius);
        
        std::cout << " The computed area of the circle is: " << circleArea << endl;
        // if the circles area is less then 49 the output on the screen will change.
        if (circleArea <= 49)
        
            cout<< circleArea << " is less than or equal to 49 units^2, Small Geometry. \n";
        
        if (circleArea > 49 && circleArea <= 183.5)
            cout<< rectangleArea << " is greater than 49 units^2 but less than 183.5 units^2, Medium Geometry. \n";
        
        if (circleArea > 183.5)
            cout << circleArea << " is greater than 185.3 units^2, Large Geometry. \n";    }
    
         return 0;
}

