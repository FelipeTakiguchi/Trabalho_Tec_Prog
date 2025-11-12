#include "Obstaculo.hpp"
#include "./Gerenciador_Grafico.hpp"

using namespace TrabalhoJogo::Entidades;

Obstaculo::Obstaculo(const sf::Vector2f& pos, const sf::Vector2f& tam, bool danoso)
    : danoso(danoso)
{
    corpo.setSize(tam);
    corpo.setPosition(pos);
    corpo.setFillColor(danoso ? sf::Color::Red : sf::Color::White);
}

Obstaculo::~Obstaculo()
{
}

void Obstaculo::executar() {}