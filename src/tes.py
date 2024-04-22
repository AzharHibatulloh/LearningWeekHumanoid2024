import turtle

class RobotControl:
    def __init__(self):
        self.t = turtle.Turtle()

    def move_forward(self):
        # Kode untuk membuat robot maju
        self.t.forward(50)

    def move_backward(self):
        # Kode untuk membuat robot mundur
        self.t.backward(50)

    def turn_right(self):
        # Kode untuk membuat robot berbelok ke kanan
        self.t.right(90)

    def turn_left(self):
        # Kode untuk membuat robot berbelok ke kiri
        self.t.left(90)

    def control_robot(self):
        while True:
            key = input("Masukkan perintah (F=forward, B=backward, R=right, L=left, Q=quit): ").upper()
            if key == 'F':
                self.move_forward()
            elif key == 'B':
                self.move_backward()
            elif key == 'R':
                self.turn_right()
            elif key == 'L':
                self.turn_left()
            elif key == 'Q':
                break
            else:
                print("Perintah tidak valid!")

if __name__ == "__main__":
    robot_control = RobotControl()
    robot_control.control_robot()
    turtle.done()
