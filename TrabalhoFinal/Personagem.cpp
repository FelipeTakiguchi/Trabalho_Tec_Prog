#include "Personagem.hpp"

using namespace TrabalhoJogo::Entidades::Personagens;

Personagem::Personagem(const sf::Vector2f& pos, const sf::Vector2f& tam)
{
    corpo.setSize(tam);    
    corpo.setPosition(pos);
    corpo.setFillColor(sf::Color::White);
    velocidade = 100.f;
}

Personagem::~Personagem(){}
