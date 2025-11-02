#ifndef JOGO_H
#define JOGO_H

#include "Gerenciador_Grafico.hpp"
#include "Jogador.hpp"
#include "Inimigo.hpp"

namespace TrabalhoJogo
{
    class Jogo
    {
    public:
        Jogo();
        void executar();

    private:
        TrabalhoJogo::Gerenciadores::Gerenciador_Grafico* pGG;
        std::vector<TrabalhoJogo::Entidades::Personagens::Personagem*> personagens;
        Entidades::Personagens::Jogador* jogador;

        void processarEventos();
        void atualizar(float deltaTime);
        void renderizar();
    };
}

#endif
