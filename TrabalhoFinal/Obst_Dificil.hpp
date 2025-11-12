#ifndef OBST_DIFICIL_HPP
#define OBST_DIFICIL_HPP

#include "Obstaculo.hpp"

namespace TrabalhoJogo
{
    namespace Entidades
    {
        class Obst_Dificil : public Obstaculo
        {
        private:
            short int danosidade;

        public:
            Obst_Dificil(const sf::Vector2f& pos, const sf::Vector2f& tam, short int danosidade);

            void executar() override;
            void obstacular(Personagens::Jogador* pJogador) override;
        };
    }
}

#endif
