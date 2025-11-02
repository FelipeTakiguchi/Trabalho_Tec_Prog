#ifndef PERSONAGEM_HPP
#define PERSONAGEM_HPP

#include <SFML/Graphics.hpp>

namespace TrabalhoJogo
{
    namespace Entidades
    {
        namespace Personagens
        {
            class Personagem
            {
            protected:
                sf::RectangleShape corpo;
                float velocidade;

            public:
                Personagem(const sf::Vector2f& pos, const sf::Vector2f& tam);
                virtual ~Personagem();

                // Métodos virtuais puros (tornam a classe abstrata)
                virtual void atualizar(float deltaTime) = 0;
                virtual void desenhar() = 0;

                // Métodos comuns
                virtual sf::RectangleShape getCorpo() const { return corpo; }
                virtual void setPosicao(const sf::Vector2f& pos) { corpo.setPosition(pos); }
            };
        }
    }
}

#endif
