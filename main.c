#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>
void drawHeart(int x, int y, int size, int color)
{
    setcolor(color); // Set the color of the heart

    // Draw the two filled circles (top rounded parts of the heart)
    setfillstyle(SOLID_FILL, color); // Set the fill style
    fillellipse(x - size / 2, y, size / 2, size / 2);  // Left circle
    fillellipse(x + size / 2, y, size / 2, size / 2);  // Right circle

    // Draw the triangle (bottom point of the heart)
    int leftX = x - size;  // Left vertex of the triangle
    int rightX = x + size; // Right vertex of the triangle
    int bottomY = y + (int)(1.5 * size); // Bottom vertex of the triangle

    line(leftX, y, x, bottomY);   // Left side of the triangle
    line(rightX, y, x, bottomY);  // Right side of the triangle
    line(leftX, y, rightX, y);    // Connect the circles at the bottom

	// Fill the heart with color
    floodfill(x, y + size / 2, color);
}

void polygon(int x, int y, int l, int b, int color)
{
	for(int x2 = x; x2 <= x+l; x2++)
	{
		putpixel(x2, y, color);
		putpixel(x2, y+b, color);
		delay(2);
	}
	for(int y2 = y; y2 <= y+b; y2++)
	{
		putpixel(x, y2, color);
		putpixel(x+l, y2, color);
		delay(2);
	}
	setfillstyle(SOLID_FILL, color); // Set the fill style and color
	floodfill(x + 1, y + 1, color);

}
void main()
{
	int gdriver = DETECT, gmode, HC =4;
	initgraph(&gdriver, &gmode, "");
	cleardevice();
	for(int color = 10; color <= 14; color++)
	{

		// I shape
		polygon(0, 0, 100,20, color);
		polygon(40, 20, 20, 80, color);
		polygon(0, 100, 100, 20,color);
		// heart sshape
		drawHeart(200, 40, 60, HC);
		// U
		polygon(300, 0, 20, 120, color-1);
		polygon(380, 0, 20, 120, color-1);

		polygon(320, 100, 60, 20, color-1);
		HC++;
	}
	getchar();
}
