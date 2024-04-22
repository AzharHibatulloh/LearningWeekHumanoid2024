#include <graphics.h>
#include <iostream>
#include <conio.h>
using namespace std;
 
class RobotGerak{
public:
    int x;
    int y;
    RobotGerak(int x, int y) : x(x), y(y) {}
    
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
    int height = GetSystemMetrics(SM_CYSCREEN);
    int width = GetSystemMetrics(SM_CYSCREEN);  
    
    initwindow(width, height, "", -3, -3);
    
    int x = 100, y = 100;
    
    RobotGerak gerak(x, y);
    
    int key;
    do{
        cleardevice();
        circle(gerak.x, gerak.y, 50);
        key = getch();
        
        switch(key){
            case 70:
            case 102:
                gerak.forward();
                break;
            case 66:
            case 98:
                gerak.backward();
                break;
            case 76:
            case 108:
                gerak.left();
                break;
            case 82:
            case 114:
                gerak.right();
                break;
        }
    } while (key != 81);
    return 0;
}
