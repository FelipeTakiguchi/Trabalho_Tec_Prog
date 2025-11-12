#include "Jogador.hpp"
#include "Gerenciador_Grafico.hpp"
#include <SFML/Window.hpp>
#include <iostream>

using namespace TrabalhoJogo::Entidades::Personagens;

Jogador::Jogador(const sf::Vector2f& pos, const sf::Vector2f& tam)
    : Personagem(pos, tam)
{
    velocidade = 200.f;
    corpo.setFillColor(sf::Color::Cyan);
}

Jogador::~Jogador() {}

void Jogador::atualizar(float deltaTime)
{
    sf::Vector2f movimento(0.f, 0.f);

    // W: Para cima (diminuir y)
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        movimento.y -= velocidade; // Mudar para -=

    // S: Para baixo (aumentar y)
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        movimento.y += velocidade; // Mudar para +=

    // A: Para a esquerda (diminuir x)
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        movimento.x -= velocidade; // Mudar para -=

    // D: Para a direita (aumentar x)
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        movimento.x += velocidade; // Mudar para +=

    corpo.move(movimento * deltaTime);

}