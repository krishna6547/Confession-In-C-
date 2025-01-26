# C Code to Draw a Heart and Polygon Shapes with Animation

## Introduction

This C program utilizes the graphics.h library to create animated shapes, including a heart and various polygons. The heart is drawn using two filled circles and a triangle, while the polygon shapes include "I" and "U" shapes, which are drawn by using lines and filling techniques.

### Libraries Used:
- `stdio.h`: Standard Input/Output library for handling input/output operations.
- `conio.h`: Console Input/Output for screen handling and keyboard operations.
- `graphics.h`: Graphics library for drawing shapes and handling graphical operations.
- `dos.h`: Provides access to DOS functions for time delays.
- `math.h`: Provides mathematical functions for calculations.

## Functions

### `drawHeart(int x, int y, int size, int color)`
This function draws a heart shape at the given position `(x, y)` with the specified size and color.

- **Parameters:**
  - `x`, `y`: The coordinates of the heart's center.
  - `size`: The size of the heart.
  - `color`: The color of the heart.
  
- **Description:**
  - The heart is drawn using two filled ellipses for the top rounded parts and a triangle for the bottom point.
  - The `floodfill()` function is used to fill the heart shape with color after drawing it.

### `polygon(int x, int y, int l, int b, int color)`
This function draws a polygon with the given parameters.

- **Parameters:**
  - `x`, `y`: The starting coordinates of the polygon.
  - `l`: The length of the polygon.
  - `b`: The breadth of the polygon.
  - `color`: The color of the polygon.
  
- **Description:**
  - The function draws the outer boundary of the polygon using `putpixel()` for each corner and side.
  - It then fills the inside of the polygon using the `floodfill()` function.

## Main Function

The `main()` function initializes the graphics mode, clears the screen, and then draws multiple shapes in an animated sequence. It uses the `polygon()` function to create "I" and "U" shapes and the `drawHeart()` function to create hearts with increasing sizes and colors. The color of the shapes is dynamically changed as the program runs.

### Step-by-step Process:
1. **Initialize Graphics**: The program initializes the graphics mode with `initgraph()` and clears the device using `cleardevice()`.
2. **Loop Through Colors**: A loop runs through colors (from 10 to 14), drawing shapes with varying colors.
   - **Draw "I" Shape**: The program draws an "I" shape using the `polygon()` function.
   - **Draw Heart Shape**: The `drawHeart()` function is called to draw a heart at a fixed position with an increasing color value.
   - **Draw "U" Shape**: The program draws a "U" shape, again using the `polygon()` function, with a slightly different color.
3. **Color Increment**: After drawing each shape, the color is updated to create an animated effect with changing colors.
4. **Wait for User Input**: The program waits for user input using `getchar()` before closing the graphics window.

## Output

The program displays a sequence of colorful "I" and "U" shapes alongside heart shapes, with changing colors for each iteration. The animation effect is created by the gradual transition of colors and the smooth drawing of polygons and hearts.

## Conclusion

This program demonstrates the use of basic graphics functions in C to create animated shapes and patterns. The heart shape and polygons are drawn using simple geometric techniques, and color changes are used to create a visually appealing animation effect.
