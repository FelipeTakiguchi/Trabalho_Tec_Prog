#ifndef ENTIDADE_H
#define ENTIDADE_H

#include <SFML/Graphics.hpp>
#include "Gerenciador_Grafico.hpp"

namespace TrabalhoJogo
{
    namespace Entidades
    {
        class Entidade
        {
        protected:
            sf::Vector2f posicao;
            sf::RectangleShape corpo;

        public:
            Entidade();
            virtual ~Entidade();

            virtual void atualizar(float deltaTime) = 0;
            virtual void desenhar() = 0;
        };
    }
    

}


#endif
