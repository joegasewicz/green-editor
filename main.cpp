#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "gui.h"
#include "control.h"

#define LE_WINDOW_WIDTH 2400
#define LE_WINDOW_HEIGHT 1600

int main()
{
    sf::RenderWindow window;
    // GUI graphics
    Gui gui = Gui{LE_WINDOW_WIDTH, LE_WINDOW_HEIGHT};
    Control cursor_up = Control{"assets/cursor_sprites.png", 0, 0, 31, 32};
    Control cursor_right = Control{"assets/cursor_sprites.png", 32, 0, 33, 32};

    // Sprites
    cursor_up.set(1600.f, 1150.f);
    cursor_right.set(1700.f, 1300.f);

    window.create(sf::VideoMode(LE_WINDOW_WIDTH, LE_WINDOW_HEIGHT), "Level Editor");

    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        // Clear window
        window.clear(sf::Color::Blue);
        // ================================
        // Draw
        // ================================
        // Gui
        gui.create_nav(&window);
        gui.create_left_sidebar(&window);
        gui.create_right_sidebar(&window);
        gui.create_world_container(&window);
        // Sprites
        cursor_up.draw(&window);
        cursor_right.draw(&window);

        // End current frame
        window.display();
    }

    return 0;
}
