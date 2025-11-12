#ifndef PLATAFORMA_HPP
#define PLATAFORMA_HPP

#include "Obstaculo.hpp"

namespace TrabalhoJogo
{
    namespace Entidades
    {
        class Plataforma : public Obstaculo
        {
        private:
            int altura;

        public:
            Plataforma(const sf::Vector2f& pos, const sf::Vector2f& tam, int altura);

            void executar() override;
            void obstacular(Personagens::Jogador* pJogador) override;
            void atualizar(float deltaTime) { /* plataformas são estáticas, vazio */ }
            void desenhar();
        };
    }
}

#endif
