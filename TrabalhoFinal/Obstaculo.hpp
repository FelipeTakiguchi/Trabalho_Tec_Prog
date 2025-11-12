#ifndef OBSTACULO_HPP
#define OBSTACULO_HPP

#include <SFML/Graphics.hpp>
#include "./Entidade.hpp"
#include "./Jogador.hpp"

namespace TrabalhoJogo
{
    namespace Entidades
    {
        class Obstaculo : public Entidade
        {
        protected:
            bool danoso;
            sf::RectangleShape corpo;

        public:
            Obstaculo(const sf::Vector2f& pos, const sf::Vector2f& tam, bool danoso);
            virtual ~Obstaculo();

            virtual void executar() override;

            virtual void obstacular(Personagens::Jogador* pJogador) = 0;

            sf::RectangleShape& getCorpo() { return corpo; }
        };
    }
}

#endif
