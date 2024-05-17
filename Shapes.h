/** \file Shapes.h
 * \brief Collection of functions that draw shapes
 * \details Contains DrawHorizontalLine, DrawVerticalLine, DrawSquare, DrawRectangle, DrawShapes, InitializeArrays, and DrawArrays functions
 * \author Daniel Levin
 * \version 0.1
 * \date 17/0352024
 * \pre  First initialize the system
 * \bug No known bugs
 * \copyright GNU Public
 */

#ifndef TUTORIAL4PARTI_SHAPES_H
#define TUTORIAL4PARTI_SHAPES_H

void drawHorizontalLine(int length, char ch) ;
void drawVerticalLine(int height, char ch);
void drawSquare(int size, char ch);
void drawRectangle(int height, int length, char ch);
void drawShapes();
void initializeArrays(int shapeTy[], int shapeLen[], char shapeCh[], const int arrSize);
void drawArrays(int shapeTy[], int shapeLen[], char shapeCh[], const int arrSize);

#endif //TUTORIAL4PARTI_SHAPES_H
