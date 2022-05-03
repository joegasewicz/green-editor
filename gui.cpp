//
// Created by Joe Geezer on 03/05/2022.
//

#include "gui.h"

Gui::Gui(int window_width, int window_height)
{
    _window_width = window_width;
    _window_height = window_height;
}

void Gui::create_nav(sf::RenderWindow *window)
{
    sf::RectangleShape top_line;
    sf::RectangleShape bottom_line;
    top_line.setSize(sf::Vector2f(_window_width, 2.f));
    top_line.setPosition(0.f, 1.f);
    bottom_line.setSize(sf::Vector2f(_window_width, 2.f));
    bottom_line.setPosition(0.f, 100.f);
    window->draw(top_line);
    window->draw(bottom_line);
};