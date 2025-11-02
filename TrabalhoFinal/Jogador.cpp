
#include "Jogador.hpp"
#include <SFML/Window.hpp>

using namespace TrabalhoJogo::Entidades::Personagens;

Jogador::Jogador(const sf::Vector2f& pos, const sf::Vector2f& tam) : Personagem(pos, tam)
{
    corpo.setFillColor(sf::Color::Cyan);
}

Jogador::~Jogador() {}

void Jogador::atualizar(float deltaTime)
{
    sf::Vector2f movimento(0.f, 0.f);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        movimento.y -= velocidade;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        movimento.y += velocidade;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        movimento.x -= velocidade;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        movimento.x += velocidade;

    corpo.move(movimento * deltaTime);
}

void Jogador::desenhar()
{
    // desenha usando o gerenciador gráfico
}

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