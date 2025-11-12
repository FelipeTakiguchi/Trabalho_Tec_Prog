#include "Jogo.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Plataforma.hpp"

using namespace TrabalhoJogo;
using namespace TrabalhoJogo::Entidades::Personagens;
using namespace TrabalhoJogo::Entidades;

Jogo::Jogo() : entidades()
{
    pGG = Gerenciadores::Gerenciador_Grafico::getInstancia();

    // Cria jogador e inimigo
    jogador = new Jogador({ 100.f, 300.f }, { 50.f, 50.f });
    Inimigo* inimigo = new Inimigo({ 400.f, 300.f }, { 50.f, 50.f }, jogador);

    personagens.push_back(jogador);
    personagens.push_back(inimigo);

    // Plataformas
    Plataforma* chao = new Plataforma({ 0.f, 400.f }, { 800.f, 50.f }, 0);
    Plataforma* bloco1 = new Plataforma({ 200.f, 350.f }, { 100.f, 20.f }, 1);
    Plataforma* bloco2 = new Plataforma({ 400.f, 300.f }, { 120.f, 20.f }, 2);
    Plataforma* bloco3 = new Plataforma({ 600.f, 250.f }, { 120.f, 20.f }, 3);

    entidades.push_back(chao);
    entidades.push_back(bloco1);
    entidades.push_back(bloco2);
    entidades.push_back(bloco3);

    executar();
}

void Jogo::executar()
{
    sf::Clock clock;

    while (pGG->janelaAberta())
    {
        processarEventos();

        float deltaTime = clock.restart().asSeconds();
        atualizar(deltaTime);
        renderizar();
    }
}

void Jogo::processarEventos()
{
    sf::Event evento;
    while (pGG->getJanela()->pollEvent(evento))
    {
        if (evento.type == sf::Event::Closed)
            pGG->fecharJanela();

        else if (evento.type == sf::Event::KeyPressed && evento.key.code == sf::Keyboard::Escape)
            pGG->fecharJanela();
    }
}

void Jogo::atualizar(float deltaTime)
{
    for (auto* p : personagens)
        p->atualizar(deltaTime);

   pGG->centralizarCamera(jogador->getPosicao());
}



void Jogo::renderizar()
{
    pGG->limpar();

    for (auto* p : personagens)


    pGG->mostrar();
}
