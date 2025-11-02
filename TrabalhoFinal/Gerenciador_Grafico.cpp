#include "Gerenciador_Grafico.hpp"

using namespace TrabalhoJogo::Gerenciadores;

Gerenciador_Grafico* Gerenciador_Grafico::instancia = nullptr;

Gerenciador_Grafico::Gerenciador_Grafico()
    : janela(sf::VideoMode(800, 600), "Trabalho Jogo++")
{
    janela.setFramerateLimit(60);
}

Gerenciador_Grafico::~Gerenciador_Grafico()
{
    if (janela.isOpen())
        janela.close();
}

Gerenciador_Grafico* Gerenciador_Grafico::getInstancia()
{
    if (!instancia)
        instancia = new Gerenciador_Grafico();
    return instancia;
}

sf::RenderWindow* Gerenciador_Grafico::getJanela()
{
    return &janela;
}

bool Gerenciador_Grafico::janelaAberta() const
{
    return janela.isOpen();
}

void Gerenciador_Grafico::fecharJanela()
{
    janela.close();
}

void Gerenciador_Grafico::limpar()
{
    janela.clear(sf::Color::Black);
}

void Gerenciador_Grafico::mostrar()
{
    janela.display();
}
