
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  #include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() 
    std::string s1, s2, s3;

    std::cin >> s1 >> s2 >> s3;

    std::vector<std::string> strings = {s1, s2, s3};

    std::sort(strings.begin(), strings.end());

    std::cout << strings[0] << std::endl;

    return 0;
  
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  #include <iostream>
#include <cmath>
#include <limits>

int main() {
    double A, B, C;
    std::cin >> A >> B >> C;
    
    double discriminant = B * B - 4 * A * C;
    if (discriminant > std::numeric_limits<double>::epsilon()) {
        double root1 = (-B + std::sqrt(discriminant)) / (2 * A);
        double root2 = (-B - std::sqrt(discriminant)) / (2 * A);
        std::cout << root1 << " " << root2 << std::endl;
    } else if (discriminant > -std::numeric_limits<double>::epsilon() && discriminant < std::numeric_limits<double>::epsilon()) {
        double root = -B / (2 * A);
        std::cout << root << std::endl;
    } else {
        std::cout << "No real roots" << std::endl;
    }
    
    return 0;
}
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
<<<<<<< HEAD

=======
   
   cout<<"Ingrese un caracter:" <<endl;
   cin>>caracter;
    
    if(caracter <= 90 || caracter >= 60 )
    {
        
        cout<<"Su caracter es valido." <<endl;
    }

>>>>>>> 0d0e32cd1e2291f8302c945a2e048290fe5b8a3b
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}