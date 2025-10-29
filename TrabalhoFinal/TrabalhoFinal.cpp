// TrabalhoFinal.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>

class Game
{
public:
    Game()
        : window(sf::VideoMode(800, 600), "SFML Game Base")
    {
        shape.setRadius(50.f);
        shape.setFillColor(sf::Color::Cyan);
        shape.setPosition(100.f, 100.f);
    }

    void run()
    {
        sf::Clock clock;
        while (window.isOpen())
        {
            sf::Time deltaTime = clock.restart();
            handleEvents();
            update(deltaTime);
            render();
        }
    }

private:
    sf::RenderWindow window;
    sf::CircleShape shape;
    const float speed = 200.f;

    void handleEvents()
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    void update(sf::Time deltaTime)
    {
        sf::Vector2f movement(0.f, 0.f);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            movement.y -= speed;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            movement.y += speed;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            movement.x -= speed;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            movement.x += speed;

        shape.move(movement * deltaTime.asSeconds());
    }

    void render()
    {
        window.clear(sf::Color::Black);
        window.draw(shape);
        window.display();
    }
};

int main()
{
    Game game;
    game.run();
    return 0;
}


// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
