
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  #include <iostream>
#include <string>

int main() {
    std::string string1, string2, string3;
    std::cin >> string1 >> string2 >> string3;
    
    std::string min_string = string1;
    if (string2 < min_string) {
        min_string = string2;
    }
    if (string3 < min_string) {
        min_string = string3;
    }
    
    std::cout << min_string << std::endl;
    return 0;
}

  }
void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  if (A == 0) {
        if (B != 0) {
            std::cout << -C / B << std::endl; 
        }
        
    } else {
        double D = B * B - 4 * A * C;
        if (D > 0) {
            
            double x1 = (-B + sqrt(D)) / (2 * A);
            double x2 = (-B - sqrt(D)) / (2 * A);
            std::cout << x1 << " " << x2 << std::endl;
        } else if (D == 0) {
            
            double x1 = -B / (2 * A);
            std::cout << x1 << std::endl;
        }
        
    }
}

int main() {
    double A, B, C;
    std::cin >> A >> B >> C; 
    return 0;
}
void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
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