#include<simplecpp>
main_program
{
    turtleSim();
    cout << "Please enter n as odd number starting from 5\n";
    cout << "Enter no. of sides: ";
    int nsides;
    cin >> nsides;
    int gap = floor(nsides/2);
    float interior_angle = ((nsides - 2 * gap)* 180)/nsides;
    float angle1 = interior_angle;
    float angle2 = 180 - angle1;
    right(angle1); forward(100); wait(0.5);
    repeat(nsides-1)
    {
        right(angle2); forward(100); wait(0.5);
    }
    wait(5);
}
