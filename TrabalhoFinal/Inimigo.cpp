/*#include "Inimigo.hpp"
#include "Gerenciador_Grafico.hpp"
#include <cmath>

using namespace TrabalhoJogo::Entidades::Personagens;

Inimigo::Inimigo(const sf::Vector2f pos, const sf::Vector2f tam, Jogador* j)
    : Personagem(pos, tam), jogador(j)
{
    velocidade = 80.f;
    corpo.setFillColor(sf::Color::Red);
}

Inimigo::~Inimigo() {}

void Inimigo::atualizar(float deltaTime)
{
    if (jogador)
    {
        sf::Vector2f posJogador = jogador->getCorpo().getPosition();
        sf::Vector2f posInimigo = corpo.getPosition();
        sf::Vector2f direcao = posJogador - posInimigo;

        float distancia = std::sqrt(direcao.x * direcao.x + direcao.y * direcao.y);
        if (distancia > 0)
        {
            direcao /= distancia; // normaliza
            corpo.move(direcao * velocidade * deltaTime);
        }
    }
}

void Inimigo::desenhar()
{
    TrabalhoJogo::Gerenciadores::Gerenciador_Grafico::getInstancia()->getJanela()->draw(corpo);
}*/
/*#include "Inimigo.hpp"
#include "Gerenciador_Grafico.hpp"
#include <cmath>

using namespace TrabalhoJogo::Entidades::Personagens;

Inimigo::Inimigo(const sf::Vector2f pos, const sf::Vector2f tam, Jogador* j)
    : Personagem(pos, tam), jogador(j)
{
    velocidade = 80.f;
    corpo.setFillColor(sf::Color::Red);
}

Inimigo::~Inimigo() {}

void Inimigo::atualizar(float deltaTime)
{
    if (jogador)
    {
        sf::Vector2f posJogador = jogador->getCorpo().getPosition();
        sf::Vector2f posInimigo = corpo.getPosition();
        sf::Vector2f direcao = posJogador - posInimigo;

        float distancia = std::sqrt(direcao.x * direcao.x + direcao.y * direcao.y);

        if (distancia < 200.f && distancia > 0.f) // raio de perseguição
        {
            direcao /= distancia; // normaliza
            corpo.move(direcao * velocidade * deltaTime);
        }
    }
}


void Inimigo::movimentoAleatorio(float deltaTime)
{
    
    sf::Vector2f movimento(0.f, 0.f);

    
    movimento.x = ((rand() % 3) - 1) * VELOCIDADE_INIMIGO_X * 100;
    movimento.y = ((rand() % 3) - 1) * VELOCIDADE_INIMIGO_Y * 100;

    corpo.move(movimento * deltaTime);
}

void Inimigo::desenhar()
{
    TrabalhoJogo::Gerenciadores::Gerenciador_Grafico::getInstancia()->getJanela()->draw(corpo);
}
*/

#include "Inimigo.hpp"
#include "Gerenciador_Grafico.hpp"
#include <cmath>

using namespace TrabalhoJogo::Entidades::Personagens;

Inimigo::Inimigo(const sf::Vector2f pos, const sf::Vector2f tam, Jogador* j)
    : Personagem(pos, tam), jogador(j)
{
    velocidade = 80.f;
    corpo.setFillColor(sf::Color::Red);
}

Inimigo::~Inimigo() {}

void Inimigo::atualizar(float deltaTime)
{
    if (jogador)
    {
        sf::Vector2f posJogador = jogador->getCorpo().getPosition();
        sf::Vector2f posInimigo = corpo.getPosition();
        sf::Vector2f direcao = posJogador - posInimigo;

        float distancia = std::sqrt(direcao.x * direcao.x + direcao.y * direcao.y);

        if (distancia < 200.f && distancia > 0.f) // raio de perseguição
        {
            direcao /= distancia;
            corpo.move(direcao * velocidade * deltaTime);
        }
    }
}

void Inimigo::desenhar()
{
    TrabalhoJogo::Gerenciadores::Gerenciador_Grafico::getInstancia()->getJanela()->draw(corpo);
}

