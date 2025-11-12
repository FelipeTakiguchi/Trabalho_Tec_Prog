#ifndef OBST_MEDIO_HPP
#define OBST_MEDIO_HPP

#include "Obstaculo.hpp"

namespace TrabalhoJogo
{
    namespace Entidades
    {
        class Obst_Medio : public Obstaculo
        {
        private:
            float larguraExtra;

        public:
            Obst_Medio(const sf::Vector2f& pos, const sf::Vector2f& tam, float largura);

            void executar() override;
            void obstacular(Personagens::Jogador* jogador) override;
        };
    }
}

#endif
