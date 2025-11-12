#include "./Obst_Dificil.hpp"
#include "./Jogador.hpp"
#include <iostream>

using namespace TrabalhoJogo::Entidades;

Obst_Dificil::Obst_Dificil(const sf::Vector2f& pos,
    const sf::Vector2f& tam,
    short int danosidade)
    : Obstaculo(pos, tam, true), danosidade(danosidade)
{
    corpo.setFillColor(sf::Color::Red);
}

void Obst_Dificil::executar()
{
    // obstáculo estático ou animado futuramente
}

void Obst_Dificil::obstacular(Personagens::Jogador* pJogador)
{
    if (!pJogador) return;

    auto& corpoJog = pJogador->getCorpo();

    if (corpoJog.getGlobalBounds().intersects(corpo.getGlobalBounds()))
    {
        std::cout << "Jogador sofreu dano (" << danosidade << ")" << std::endl;
        // Depois você pode adicionar um atributo de vida no jogador e reduzir aqui
    }
}
