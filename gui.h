//
// Created by Joe Geezer on 03/05/2022.
//

#ifndef LEVEL_EDITOR_GUI_H
#define LEVEL_EDITOR_GUI_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


class Gui {
public:

    explicit Gui(int window_width, int window_height);

    void create_nav(sf::RenderWindow *window);

    void create_left_sidebar(sf::RenderWindow *window);

    void create_right_sidebar(sf::RenderWindow *window);

    void create_world_container(sf::RenderWindow *window);

private:
    int _window_width;
    int _window_height;
};


#endif //LEVEL_EDITOR_GUI_H
