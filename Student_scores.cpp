#include <iostream>
#include <iomanip>

using std::cout;
using std::end;
using std::string;
using std:: setprecision



int main() 

    // Make an array of 10 student scores between: (0-100)

    int scores[10] = {70, 34, 100, 100, 78, 95, 77, 82, 99, 78};



    // Variables: For the sum,students passed, highest and lowest scores.

    int sum = 0;

    int passingCount = 0;

    int highest = scores[0];

    int lowest = scores[0];



    // Loop through a fixed-size array scores[10] to calculate: sum,the passing students,and the lowest and highest scores

    for (int i = 0; i < 10; i++) {

        sum += scores[i];



  // Output my results with setprecision for:

    std::cout << "Sum of scores: " << sum << std::endl;

    std::cout << "Average score: " << std::fixed << std::setprecision(2) << average << std::endl;

    std::cout << "Number of passing students (70 or better): " << passingCount << std::endl;

    std::cout << "Highest score: " << highest << std::endl;

    std::cout << "Lowest score: " << lowest << std::endl;



    return 0;

}
