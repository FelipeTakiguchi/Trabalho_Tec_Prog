#include "Plataforma.hpp"
#include "./Jogador.hpp"

using namespace TrabalhoJogo::Entidades;

Plataforma::Plataforma(const sf::Vector2f& pos,
    const sf::Vector2f& tam,
    int altura)
    : Obstaculo(pos, tam, false), altura(altura)
{
    corpo.setFillColor(sf::Color(150, 150, 150));
}

void Plataforma::executar()
{
    // plataforma é estática
}

void Plataforma::obstacular(Personagens::Jogador* pJogador)
{
    if (!pJogador) return;

    auto& corpoJog = pJogador->getCorpo();

    if (corpoJog.getGlobalBounds().intersects(corpo.getGlobalBounds()))
    {
        sf::Vector2f posJ = corpoJog.getPosition();
        posJ.y = corpo.getPosition().y - corpoJog.getSize().y;
        corpoJog.setPosition(posJ);
    }
}

void Plataforma::desenhar()
{
    TrabalhoJogo::Gerenciadores::Gerenciador_Grafico::getInstancia()->getJanela()->draw(corpo);
}