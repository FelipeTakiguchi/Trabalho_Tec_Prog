#include "Ente.hpp"
#include <iostream>

using namespace TrabalhoJogo;

Gerenciadores::Gerenciador_Grafico* Ente::pGG = nullptr;

Ente::Ente()
{
}

Ente::~Ente()
{
}

void Ente::setGG(Gerenciadores::Gerenciador_Grafico* pG)
{
    pGG = pG;
}

void Ente::desenhar()
{
    if (pGG)
        ;
}
