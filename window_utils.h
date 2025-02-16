#pragma once

#include <SFML/Graphics.hpp>
#include <iomanip>
#include <sstream>

void SaveWindow(const sf::RenderWindow &window, int frameCount) {
  sf::Texture texture(sf::Vector2u(window.getSize().x, window.getSize().y));
  texture.update(window);
  sf::Image image = texture.copyToImage();
  std::ostringstream filename;
  filename << "../data/frame_" << std::setw(4) << std::setfill('0')
           << frameCount << ".png";
  image.saveToFile(filename.str());
}
