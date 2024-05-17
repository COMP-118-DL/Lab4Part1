/** \file Shapes.cpp
 * \brief Library to draw shapes
 * \details Contains functions to draw horizontal lines, vertical lines, squares, rectangles, and random shapes
 * \author Daniel Levin
 * \version 0.1
 * \date 17/05/2024
 * \pre First initialize the system
 * \bug No known bugs
 * \copyright GNU Public
 */

#include <iostream>
#include "Shapes.h"
#include <cassert>

using namespace std;

/**
 *  This function draws a horizontal line made of characters specified by the user
 *  @param ch character to draw the line with
 *  @param length length of the line
 */

void drawHorizontalLine(const int length, const char ch) {
    assert(length > 0 && length < 1000);

    cout << "Horizontal line (" << length << "," << ch << ")" << endl;

    for (int i = 0; i < length; i++) {
        cout << ch;
    }
    cout << endl;

}

/**
 *  This function draws a vertical line of characters specified by the user
 *  @param ch character to draw the line with
 *  @param height height of the line
 */

void drawVerticalLine(const int height,const char ch) {
    assert(height > 0 && height < 1000);

    cout << "Horizontal line (" << height << "," << ch << ")" << endl;

    for (int i = 0; i < height; i++) {
        cout << ch << endl;
    }
}

/**
 *  This function draws a square of a specified length and character
 * @param ch character to draw the square with
 * @param size size of the square
 */

void drawSquare(const int size, const char ch) {
    assert(size > 0 && size < 1000);

    cout << "Square (" << size << "," << ch << ")" << endl;

    for (int i = 0; i < size; i++) {
        cout << ch;
    }
    cout << endl;

    for (int i = 0; i < size - 2; i++) {
        cout << ch;
        for (int j = 0; j < size - 2; j++) {
            cout << " ";
        }
        cout << ch << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << ch;
    }
}

/**
 *  This function draws a rectangle of a specified width and height made from a character
 *  @param ch character to draw the rectangle with
 *  @param height height of the rectangle
 *  @param length length of the rectangle
 */
void drawRectangle(const int height, const int length, const char ch) {
    assert(height > 0 && height < 1000);
    assert(length > 0 && length < 1000);

    cout << "Rectangle (" << height << "," << length << "," << ch << ")" << endl;

    for (int i = 0; i < length; i++) {
        cout << ch;
    }
    cout << endl;

    for (int i = 0; i < height - 2; i++) {
        cout << ch;
        for (int j = 0; j < length - 2; j++) {
            cout << " ";
        }
        cout << ch << endl;
    }

    for (int i = 0; i < length; i++) {
        cout << ch;
    }
    cout << endl;
}

/**
 * This function draws a random number of random shapes
 *
 */
void drawShapes() {
    const int MAX_SHAPES = 10;

    for (int i = 0; i < MAX_SHAPES; i++) {
        int shape = rand() % 4 + 1;
        int size = rand() % 10 + 1;
        int height = rand() % 10 + 1;
        int length = rand() % 10 + 1;
        char ch = rand() % 126 + 33;

        switch (shape) {
            case 1:
                drawHorizontalLine(size, ch);
                break;
            case 2:
                drawVerticalLine(size, ch);
                break;
            case 3:
                drawSquare(height, ch);
                break;
            case 4:
                drawRectangle(height, length, ch);
                break;
        }
    }
}

/**
 * This function initializes the arrays for the shapes
 * @param shapeTy array of shape types
 * @param shapeLen array of shape lengths
 * @param shapeCh array of shape characters
 * @param arrSize size of the arrays
 */

void initializeArrays(int shapeTy[], int shapeLen[], char shapeCh[], const int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        shapeTy[i] = rand() % 4 + 1;
        shapeLen[i] = rand() % 20 + 1;
        shapeCh[i] = rand() % 126 + 33;
    }

    drawArrays(shapeTy, shapeLen, shapeCh, arrSize);
}

/**
 * This function draws the shapes from the arrays
 * @param shapeTy array of shape types
 * @param shapeLen array of shape lengths
 * @param shapeCh array of shape characters
 * @param arrSize size of the arrays
 */

void drawArrays(int shapeTy[], int shapeLen[], char shapeCh[], const int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        switch (shapeTy[i]) {
            case 1:
                drawHorizontalLine(shapeLen[i], shapeCh[i]);
                break;
            case 2:
                drawVerticalLine(shapeLen[i], shapeCh[i]);
                break;
            case 3:
                drawSquare(shapeLen[i], shapeCh[i]);
                break;
            case 4:
                drawRectangle(shapeLen[i], shapeLen[i], shapeCh[i]);
                break;
        }
    }
}