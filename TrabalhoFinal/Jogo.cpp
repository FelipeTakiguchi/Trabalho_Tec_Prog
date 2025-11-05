#include "Jogo.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace TrabalhoJogo;
using namespace TrabalhoJogo::Entidades::Personagens;

Jogo::Jogo() : personagens() 
{
    pGG = Gerenciadores::Gerenciador_Grafico::getInstancia();

    // Cria jogador e inimigo dinamicamente
   // jogador = new Jogador(sf::Vector2f(100.f, 200.f), sf::Vector2f(50.f, 50.f));
   // Inimigo* inimigo = new Inimigo(sf::Vector2f(400.f, 200.f), sf::Vector2f(50.f, 50.f), jogador);
    
    jogador = new Jogador({ 100.f, 300.f }, { 50.f, 50.f });
    Inimigo* inimigo = new Inimigo({ 400.f, 300.f }, { 50.f, 50.f }, jogador);


    personagens.push_back(jogador);
    personagens.push_back(inimigo);

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
        p->desenhar(); 

    pGG->mostrar();
}
