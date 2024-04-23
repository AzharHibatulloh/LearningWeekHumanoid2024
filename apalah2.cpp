#include <iostream>

using namespace std;

class Robot {
private:
    int x;
    int y;

public:
 
  

    
    void move(int new_x, int new_y) {
        x = new_x;
        y = new_y;
        cout << "Posisi robot telah diubah menjadi (" << x << ", " << y << ")" << endl;
    }

  
    int getX() const {
        return x;
    }


    int getY() const {
        return y;
    }
};

int main() {
    
    Robot myRobot(0, 0);


    myRobot.move(3, 4);

    myRobot.move(7, 2);

    return 0;
}
