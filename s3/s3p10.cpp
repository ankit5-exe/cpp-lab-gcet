#include <iostream>
using namespace std;

class Result {
    int rollNumber;
    int marks[5];
public:
    Result(int roll, int m[]) {
        rollNumber = roll;
        for(int i = 0; i < 5; i++) marks[i] = m[i];
    }

    void display() const {
        cout << "Roll No: " << rollNumber << " | Marks: [";
        for(int i = 0; i < 5; i++) {
            cout << marks[i] << (i < 4 ? ", " : "");
        }
        cout << "]" << endl;
    }

    int getTotal() const {
        int total = 0;
        for(int i = 0; i < 5; i++) total += marks[i];
        return total;
    }

    bool compareTotal(Result r) {
        return getTotal() == r.getTotal();
    }

    friend Result getTopper(Result r1, Result r2, Result r3) {
        Result top = r1;
        if (r2.getTotal() > top.getTotal()) top = r2;
        if (r3.getTotal() > top.getTotal()) top = r3;
        return top;
    }

   
    friend Result applyGrace(Result r) {
        Result res = r;
        int graceLeft = 20;
        for (int i = 0; i < 5 && graceLeft > 0; i++) {
            if (res.marks[i] < 100) {
                int graceGiven = min(5, 100 - res.marks[i]);
                graceGiven = min(graceGiven, graceLeft);
                res.marks[i] += graceGiven;
                graceLeft -= graceGiven;
            }
        }
        return res;
    }
};

int main() {
    int m1[] = {85, 90, 78, 88, 92};
    int m2[] = {70, 75, 80, 85, 90};
    int m3[] = {90, 95, 98, 89, 99};
    
    Result r1(101, m1), r2(102, m2), r3(103, m3);
    
    Result topper = getTopper(r1, r2, r3);
    cout << "Topper -> ";
    topper.display();
    
    Result graced = applyGrace(r2);
    cout << "Graced Result -> ";
    graced.display();
    
    return 0;
}