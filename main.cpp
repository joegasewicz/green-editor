#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "gui.h"

#define LE_WINDOW_WIDTH 2400
#define LE_WINDOW_HEIGHT 1600

int main()
{
    sf::RenderWindow window;
    // GUI graphics
    Gui gui = Gui{LE_WINDOW_WIDTH, LE_WINDOW_HEIGHT};

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

        // End current frame
        window.display();
    }

    return 0;
}
