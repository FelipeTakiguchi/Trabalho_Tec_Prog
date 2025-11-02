#ifndef INIMIGO_HPP
#define INIMIGO_HPP

#include <SFML/Graphics.hpp>
#include "Personagem.hpp"
#include "Jogador.hpp"

#define VELOCIDADE_INIMIGO_X 0.025f
#define VELOCIDADE_INIMIGO_Y 0.025f
#define RAIO_PERSEGUIR_X 200.f
#define RAIO_PERSEGUIR_Y 200.f

namespace TrabalhoJogo
{
    namespace Entidades
    {
        namespace Personagens
        {
            class Inimigo : public Personagem
            {
            private:
                Jogador* jogador;
                short moveAleatorio;

            public:
                Inimigo(const sf::Vector2f pos, const sf::Vector2f tam, Jogador* j);
                virtual ~Inimigo();

                void atualizar(float deltaTime) override;
                void desenhar() override;

            private:
                void persegueJogador(const sf::Vector2f& posJogador, const sf::Vector2f& posInimigo, float deltaTime);
                void movimentoAleatorio(float deltaTime);
            };
        }
    }
}

#endif
