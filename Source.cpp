// Idea Philipp Siedler.
// Write a program that draws star-shaped patterns by connecting dots. 
// lying on a superellipse. Let parameters a, b, m, n and N be introduced as arguments.

#define _USE_MATH_DEFINES
#include "Simple_window.h"
#include "Graph.h"
#include <cmath>
using namespace Graph_lib;

int main()
{
    Point tl(100, 100);
    Simple_window win(tl, 800, 1000, "Superellipses");
    int x_size = win.x_max();
    int y_size = win.y_max();
    int x_grid = 100;
    int y_grid = 100;
    Lines grid;
    for (int x = x_grid; x < x_size; x += x_grid)
        grid.add(Point{ x,0 }, Point{ x,800 });
    win.attach(grid);
    for (int y = y_grid; y < 800; y += y_grid)
        grid.add(Point{ 0,y }, Point{ 800,y });
    win.attach(grid);

    Rectangle_BS r1{ Point{0 ,0 } , 100 , 100 };
    r1.set_fill_color(Color::red);
    win.attach(r1);

    Rectangle_BS r2{ Point{100 ,100 } , 100 , 100 };
    r2.set_fill_color(Color::red);
    win.attach(r2);

    Rectangle_BS r3{ Point{200 ,200 } , 100 , 100 };
    r3.set_fill_color(Color::red);
    win.attach(r3);

    Rectangle_BS r4{ Point{300 ,300 } , 100 , 100 };
    r4.set_fill_color(Color::red);
    win.attach(r4);

    Rectangle_BS r5{ Point{400 ,400 } , 100 , 100 };
    r5.set_fill_color(Color::red);
    win.attach(r5);

    Rectangle_BS r6{ Point{500 ,500 } , 100 , 100 };
    r6.set_fill_color(Color::red);
    win.attach(r6);

    Rectangle_BS r7{ Point{600 ,600 } , 100 , 100 };
    r7.set_fill_color(Color::red);
    win.attach(r7);

    Rectangle_BS r8{ Point{700 ,700 } , 100 , 100 };
    r8.set_fill_color(Color::red);
    win.attach(r8);
   
    Image ii{ Point{0,0} , "z.jpg" };
    ii.set_mask(Point{0,0}, 200, 200);
    win.attach(ii);

    Image ii2{ Point{0,200} , "z.jpg" };
    ii2.set_mask(Point{ 0,200 }, 200, 200);
    win.attach(ii2);

    Image ii3{ Point{0,400} , "z.jpg" };
    ii3.set_mask(Point{ 0,400 }, 200, 200);
    win.attach(ii3);

    win.wait_for_button();

    for (int i = 0; i < 3; i++)
    {
        Image ii4{ Point{0,i * 200} , "d.jpg" };
        ii4.set_mask(Point{ 0,i * 200 }, 200, 200);
        win.attach(ii4);
        win.wait_for_button();
    }


    return 0;
}