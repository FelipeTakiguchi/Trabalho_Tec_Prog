/*#ifndef PERSONAGEM_HPP
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
                virtual sf::Vector2f getPosicao() const { return corpo.getPosition(); }

                virtual void setPosicao(const sf::Vector2f& pos) { corpo.setPosition(pos); }
            };
        }
    }
}

#endif
*/
#ifndef PERSONAGEM_HPP
#define PERSONAGEM_HPP

#include <SFML/Graphics.hpp>
#include "Entidade.hpp"

namespace TrabalhoJogo {
    namespace Entidades {
        namespace Personagens {

            class Personagem 
            {
            protected:
                sf::RectangleShape corpo;
                int num_vidas;
                float velocidade;

            public:
                Personagem(const sf::Vector2f& pos, const sf::Vector2f& tam);
                virtual ~Personagem();

                virtual void atualizar(float deltaTime) = 0;
                virtual void desenhar() = 0;

                const sf::RectangleShape& getCorpo() const { return corpo; }
                sf::Vector2f getPosicao() const { return corpo.getPosition(); }
            };

        }
    }
}

#endif
