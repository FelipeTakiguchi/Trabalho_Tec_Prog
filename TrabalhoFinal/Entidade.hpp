#ifndef ENTIDADE_H
#define ENTIDADE_H

#include <SFML/Graphics.hpp>
#include "Gerenciador_Grafico.hpp"
#include "Ente.hpp"

namespace TrabalhoJogo
{
    namespace Entidades
    {
        class Entidade : public Ente
        {
            protected:
                sf::Vector2f posicao;
                sf::RectangleShape corpo;
                int x;
                int y;

            public:
                Entidade();
                virtual ~Entidade();

                void executar() override;
        };
    }
}

#endif
