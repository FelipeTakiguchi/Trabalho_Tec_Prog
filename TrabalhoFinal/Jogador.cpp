/*
#include "Jogador.hpp"
#include "Gerenciador_Grafico.hpp"
#include <SFML/Window.hpp>

using namespace TrabalhoJogo::Entidades::Personagens;

Jogador::Jogador(const sf::Vector2f& pos, const sf::Vector2f& tam)
    : Personagem(pos, tam)
{
    velocidade = 200.f;
    corpo.setSize(tam);
    corpo.setFillColor(sf::Color::Cyan);
    corpo.setPosition(pos);
}

Jogador::~Jogador() {}

void Jogador::atualizar(float deltaTime)
{
    sf::Vector2f movimento(0.f, 0.f);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        movimento.y += velocidade;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        movimento.y -= velocidade;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        movimento.x += velocidade;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        movimento.x -= velocidade;

    corpo.move(movimento * deltaTime);
}

void Jogador::desenhar()
{
    TrabalhoJogo::Gerenciadores::Gerenciador_Grafico::getInstancia()->getJanela()->draw(corpo);
}
*/

/*
TrabalhoJogo::Entidades::Personagens::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f tam)
{
    velocidade = 200.f;
    corpo.setFillColor(sf::Color::Cyan);
}

TrabalhoJogo::Entidades::Personagens::Jogador::~Jogador() {}

const sf::RectangleShape TrabalhoJogo::Entidades::Personagens::Jogador::getCorpo()
{
    return corpo;
}

void TrabalhoJogo::Entidades::Personagens::Jogador::atualizar(float deltaTime)
{
    sf::Vector2f movimento(0.f, 0.f);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        movimento.y -= velocidade;
    }else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        movimento.y += velocidade;
    }else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        movimento.x -= velocidade;
    }else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        movimento.x += velocidade;
    }

    posicao += movimento * deltaTime;
    corpo.setPosition(posicao);
}

void TrabalhoJogo::Entidades::Personagens::Jogador::desenhar()
{
    TrabalhoJogo::Gerenciadores::Gerenciador_Grafico::getInstancia()->getJanela()->draw(corpo);
}

*/

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

void Jogador::desenhar()
{
    TrabalhoJogo::Gerenciadores::Gerenciador_Grafico::getInstancia()->getJanela()->draw(corpo);
}
