#ifndef GERENCIADOR_GRAFICO_H
#define GERENCIADOR_GRAFICO_H

#include <SFML/Graphics.hpp>

namespace TrabalhoJogo
{
    namespace Gerenciadores
    {
        class Gerenciador_Grafico
        {
        private:
            static Gerenciador_Grafico* instancia;
            sf::RenderWindow janela;

            Gerenciador_Grafico();

        public:
            ~Gerenciador_Grafico();

            static Gerenciador_Grafico* getInstancia();

            sf::RenderWindow* getJanela();
            bool janelaAberta() const;
            void fecharJanela();
            void limpar();
            void mostrar();
        };
    }
}

#endif
