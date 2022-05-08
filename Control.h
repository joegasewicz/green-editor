//
// Created by Joe Geezer on 08/05/2022.
//

#ifndef LEVEL_EDITOR_CONTROL_H
#define LEVEL_EDITOR_CONTROL_H

#include <iostream>
#include <string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

enum class ControlType {
    Cursor
};

class Control {

public:
    explicit Control(std::string asset_path, int rectLeft, int rectTop, int rectWidth, int rectHeight);

    ControlType type;

    void set(float pos_x, float pos_y);

    void draw(sf::RenderWindow *window);

private:
    std::string _asset_path;
    sf::Texture _texture;
    sf::Sprite _sprite;
    int _rectLeft;
    int _rectTop;
    int _rectWidth;
    int _rectHeight;

    void load_asset();
};


#endif //LEVEL_EDITOR_CONTROL_H
