#include <iostream>

using namespace std;   
class Coordinates {
private:
    int x, y;

public:
    Coordinates() {
    	x = 0;
    	y = 0;
	} 
	
    void display() {
        cout << "Current Coordinates: (" << x << ", " << y << ")" << endl;
    }
	
    void forward() {
        y++;
    }
    	
    void left() {
        x--;
    }

    void backward() {
        y--;
    }
	
    void right() {
        x++;
    }
	
};

int main() {
    Coordinates move;

    char input;
    
    do {
    	//system("cls");
    	cout << "Forward (w), Left (a), Backward (s), Right (d), Quit (q)" << endl;
    	cout << "--------------------------------------------------------" << endl;
    	move.display();
    	cout << ">> ";
    	cin >> input;
    	
    	switch (input) {
            case 'w':
                move.forward();
                break;
            case 'a':
                move.left();
                break;
            case 's':
                move.backward();
                break;
            case 'd':
                move.right();
                break;
            case 'q':
                return 0;
            default:
                cout << "Invalid Argument" << endl;
            	system("pause");
        }
	} 
	while (input != 'q'); 
	}
