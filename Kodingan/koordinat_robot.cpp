#include <iostream>
using namespace std;

class RobotGerak{
public:
        int x;
        int y;
        RobotGerak(int x, int y) : x(x), y(y){}

        void forward(){
                y -= 10;
                cout << "Maju  : ";
                cout << x << ", " << y << endl;
        }
        void backward(){
                y += 10;
                cout << "mundur: ";
                cout << x << ", " << y << endl;
        }
        void left(){
                x -= 10;
                cout << "kiri  : ";
                cout << x << ", " << y << endl;
        }
        void right(){
                x += 10;
                cout << "kanan : ";
                cout << x << ", " << y << endl;
        }
};
int main(){
        int x = 100, y = 100;
        RobotGerak gerak(x, y);
        char key;
        do{
                cout << "\nW. Maju\nS. Mundur\nD. Kanan\nA. Kiri\ninput gerakan: ";
                cin >> key;

                switch(key){
                        case 'w':
                        case 'W':
                                gerak.forward();
                                break;
                        case 's':
                        case 'S':
                                gerak.backward();
                                break;
                        case 'a':
                        case 'A':
                                gerak.left();
                                break;
                        case 'd':
                        case 'D':
                                gerak.right();
                                break;
                }
        } while (key != 'x');
        return 0;
}
