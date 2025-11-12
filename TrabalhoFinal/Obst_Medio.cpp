#include "Obst_Medio.hpp"
#include "./Jogador.hpp"

using namespace TrabalhoJogo::Entidades;

Obst_Medio::Obst_Medio(const sf::Vector2f& pos,
    const sf::Vector2f& tam,
    float largura)
    : Obstaculo(pos, tam, false), larguraExtra(largura)
{
    corpo.setFillColor(sf::Color(200, 150, 50));
}

void Obst_Medio::executar()
{
    // comportamento opcional
}

void Obst_Medio::obstacular(Personagens::Jogador* jogador)
{
    if (!jogador) return;

    auto& corpoJog = jogador->getCorpo();

    if (corpoJog.getGlobalBounds().intersects(corpo.getGlobalBounds()))
    {
        // empurra o jogador para fora do obstáculo
        sf::Vector2f posJ = corpoJog.getPosition();
        posJ.x += larguraExtra;
        corpoJog.setPosition(posJ);
    }
}
