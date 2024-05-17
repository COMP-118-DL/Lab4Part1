/** \file Shapes.cpp
* \brief Collection of functions that draw shapes
* \details Contains DrawHorizontalLine, DrawVerticalLine, DrawSquare, DrawRectangle, DrawShapes, InitializeArrays, and DrawArrays functions
* \author Daniel Levin
* \version 1.0
* \date 04/03/2024
* \copyright GNU Public License.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Shapes.h"

using namespace std;

int main() {

    srand(time(0));

    const int MAX_ARRAY = 10;

    int shapeType[MAX_ARRAY];
    int shapeLength[MAX_ARRAY];

    int userChoice;
    int size;
    int height, length;

    char ch;
    char shapeChar[MAX_ARRAY];


    cout << "1) Draw a horizontal line" << endl;
    cout << "2) Draw a vertical line" << endl;
    cout << "3) Draw a square" << endl;
    cout << "4) Draw a rectangle" << endl;
    cout << "5) Fun" << endl;
    cout << "6) Random Shapes" << endl;
    cout << "7) Exit" << endl;

    cout << "Enter your option: ";
    cin >> userChoice;

    switch (userChoice) {
        case 1:
            cout << "\nInput the length and character of the line:";
            cin >> size >> ch;
            drawHorizontalLine(size, ch);
            break;
        case 2:
            cout << "\nInput the height and character of the line:";
            cin >> size >> ch;
            drawVerticalLine(size, ch);
            break;
        case 3:
            cout << "\nInput the height and character of the square:";
            cin >> height >> ch;
            drawSquare(height, ch);
            break;
        case 4:
            cout << "\nInput the height, length and character of the rectangle:";
            cin >> height >> length >> ch;
            drawRectangle(height, length, ch);
            break;
        case 5:
            drawShapes();
            break;
        case 6:
            initializeArrays(shapeType, shapeLength, shapeChar, MAX_ARRAY);
            break;
        case 7:
            cout << "Goodbye!";
            break;
        default:
            cout << "Invalid option!";
    }

    return 0;
}

