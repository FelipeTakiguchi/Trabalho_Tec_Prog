
/*
TrabalhoJogo::Entidades::Personagens::Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f tam)
{
	// Inicialização dos atributos do personagem
}
TrabalhoJogo::Entidades::Personagens::Personagem::~Personagem()
{
	// Limpeza dos recursos do personagem
}
*/
/*
#include "Personagem.hpp"

using namespace TrabalhoJogo::Entidades::Personagens;

Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f tam)
    : posicao(pos), tamanho(tam), velocidade(0.f)
{
    corpo.setSize(tamanho);
    corpo.setPosition(posicao);
    corpo.setFillColor(sf::Color::White);
}

Personagem::~Personagem() {}
*/
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
