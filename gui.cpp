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

void Gui::create_left_sidebar(sf::RenderWindow *window)
{
    sf::RectangleShape left_line;
    sf::RectangleShape right_line;
    left_line.setSize(sf::Vector2f(2.f, _window_height));
    left_line.setPosition(2.f, 100.f);
    right_line.setSize(sf::Vector2f(2.f, _window_height));
    right_line.setPosition(300.f, 100.f);
    window->draw(left_line);
    window->draw(right_line);
};

void Gui::create_right_sidebar(sf::RenderWindow *window)
{
    sf::RectangleShape right_line;
    sf::RectangleShape left_line;
    right_line.setSize(sf::Vector2f(2.f, _window_height));
    right_line.setPosition(_window_width-2.f, 100.f);
    left_line.setSize(sf::Vector2f(2.f, _window_height));
    left_line.setPosition(_window_width-300.f, 100.f);
    window->draw(right_line);
    window->draw(left_line);
};