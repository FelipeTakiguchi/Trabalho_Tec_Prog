#include "Inimigo.hpp"
#include "Gerenciador_Grafico.hpp"
#include <cmath>
#include <cstdlib> // Para rand()
#include <ctime>  
#include <iostream>// Para srand() - **Chame srand(time(NULL)); uma vez no início do Jogo/Main!**

using namespace TrabalhoJogo::Entidades::Personagens;

Inimigo::Inimigo(const sf::Vector2f pos, const sf::Vector2f tam, Jogador* j)
    : Personagem(pos, tam), jogador(j), tempoDecisao(0.f), direcaoAleatoria(0.f, 0.f) // Inicialização
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

        if (distancia < 200.f && distancia > 0.f) // Perseguição
        {
            direcao /= distancia; // Normaliza
            corpo.move(direcao * velocidade * deltaTime);

        }
        else // Movimento Aleatório (se o jogador estiver fora do raio)
        {
            movimentoAleatorio(deltaTime);
        }
    }
    else // Caso o ponteiro do jogador seja nulo
    {
        movimentoAleatorio(deltaTime);
    }
}

void Inimigo::movimentoAleatorio(float deltaTime)
{
    // Tempo para decidir um novo rumo (ex: a cada 2 segundos)
    const float TEMPO_MAX_DECISAO = 2.0f;

    tempoDecisao -= deltaTime;

    if (tempoDecisao <= 0.f)
    {
        // Novo tempo de decisão aleatório (entre 1.5s e 2.5s, por exemplo)
        tempoDecisao = (float)(rand() % 100) / 100.f + 1.5f;

        // Gera uma direção aleatória (-1, 0, ou 1) para x e y
        direcaoAleatoria.x = (float)((rand() % 3) - 1);
        direcaoAleatoria.y = (float)((rand() % 3) - 1);

        // Normaliza a direção se for diagonal para não ficar mais rápido
        float comprimento = std::sqrt(direcaoAleatoria.x * direcaoAleatoria.x + direcaoAleatoria.y * direcaoAleatoria.y);
        if (comprimento > 0.f) {
            direcaoAleatoria /= comprimento;
        }
    }

    corpo.move(direcaoAleatoria * velocidade * deltaTime * 0.5f); // Use uma velocidade menor
}

