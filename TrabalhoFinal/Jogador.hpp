#ifndef JOGADOR_H
#define JOGADOR_H

#include <SFML/Graphics.hpp>
#include "Personagem.hpp"

namespace TrabalhoJogo
{
    namespace Entidades
    {
        namespace Personagens
        {
			class Jogador : public Personagem
            {
            public:
                Jogador(const sf::Vector2f& pos, const sf::Vector2f& tam);
                virtual ~Jogador();

                void atualizar(float deltaTime) override;
                sf::RectangleShape& getCorpo() { return corpo; }
                const sf::RectangleShape& getCorpo() const { return corpo; }
            };
        }
    }
}

#endif
