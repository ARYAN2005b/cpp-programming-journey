#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// main function: program execution starts here

int main () {
// variables to store student information and marks
    string studentname;
    double marks, total = 0;
    double percentage;

    cout << "enter student name:";
    getline(cin, studentname);

    for(int i = 1; i <=5; i++) {
      while (true) {
// get marks for five subjects with input validation
        cout << "enter marks for subject " << i <<":";
        cin >> marks;
        
        if(cin.fail()) {

cout << "invalid input! please enter a number a number.\n";
cin.clear();
cin.ignore(10000,'\n');
        }
      else if(marks < 0 || marks > 100) {
   cout << "marks must be betwwen 0 and 100. try again.\n";
    }
    else{
      break;
    }
   }
   total +=marks;
}
// calculate percentage using the total marks out of 500
     percentage = (total / 500)*100;
// assign a grade based on the student's percentage
     char grade;

     if (percentage >=90) {
        grade = 'a' ;
     }
     else if (percentage >=80) {
        grade = 'b';
     }
     else if (percentage >= 70) {
        grade = 'd';
     }
     else {
        grade = 'f';
     }
// display the final student result 
     cout << "\n============ student result ==========\n";

     cout << "student name : " << studentname << endl;
     cout << "total marks  : " << total << " / 500" <<endl;
     cout << "percentage   : " << fixed << setprecision(2)
          << percentage   << "%" << endl;
    cout   <<"grade        : " << grade << endl;

    cout  << "============================================================\n";

    return 0;
}