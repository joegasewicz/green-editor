//
// Created by Joe Geezer on 08/05/2022.
//

#include "Control.h"

#include <utility>

Control::Control(std::string asset_path, int rectLeft, int rectTop, int rectWidth, int rectHeight)
{
    _asset_path = asset_path;
    _rectLeft = rectLeft;
    _rectTop = rectTop;
    _rectWidth = rectWidth;
    _rectHeight = rectHeight;
    load_asset();
};

void Control::load_asset()
{
    if (!_texture.loadFromFile(_asset_path))
    {
        std::cout << "Error loading cursor up asset" << std::endl;
    }
};

void Control::draw(sf::RenderWindow *window)
{
    window->draw(_sprite);
};

void Control::set(float pos_x, float pos_y)
{
    _sprite.setTexture(_texture);
    _sprite.setTextureRect(sf::IntRect(_rectLeft, _rectTop, _rectWidth, _rectHeight));
    _sprite.setScale(sf::Vector2f(4.f, 4.f));
    _sprite.setPosition(sf::Vector2f(pos_x, pos_y));
};
