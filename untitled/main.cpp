#include <iostream>
using namespace std;


struct Points {
    int x;
    int y;
};

bool operator==(const Points& a, const Points& b) {
    return a.x == b.x && a.y == b.y;
}

ostream& operator<<(ostream& os, const Points& points) {
    os << "(" << points.x << "," << points.y << ")";
    return os;
}


int main() {

    Points points {2, 3};
    Points points2 {2, 3};

    cout << points << endl;
    cout << points2 << endl;



    return 0;
}
