// TrabalhoFinal.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include "Jogo.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    TrabalhoJogo::Jogo jogo;
    jogo.executar();
    return 0;
}


/*
// Constantes de física
    const float GRAVITY = 800.0f;     // Gravidade (pixels/s²)
    const float JUMP_SPEED = -350.0f; // Velocidade inicial do pulo
    const float MOVE_SPEED = 200.0f;  // Velocidade de movimento horizontal

    int main() {
        // Criação da janela
        sf::RenderWindow window(sf::VideoMode(800, 600), "Plataforma SFML");
        window.setFramerateLimit(60);

        // Jogador (quadrado vermelho)
        sf::RectangleShape player(sf::Vector2f(50, 50));
        player.setFillColor(sf::Color::Red);
        player.setPosition(100, 500);

        // Plataforma (retângulo verde)
        sf::RectangleShape platform(sf::Vector2f(400, 30));
        platform.setFillColor(sf::Color::Green);
        platform.setPosition(20, 550);

        // Variáveis de movimento
        sf::Vector2f velocity(0, 0);
        bool onGround = false;

        sf::Clock clock; // Para calcular deltaTime

        // Loop principal do jogo
        while (window.isOpen()) {
            float dt = clock.restart().asSeconds(); // Tempo entre frames

            // Processa eventos
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            // Movimento horizontal
            velocity.x = 0;
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                velocity.x = -MOVE_SPEED;
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                velocity.x = MOVE_SPEED;

            // Pulo
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && onGround) {
                velocity.y = JUMP_SPEED;
                onGround = false;
            }

            // Aplica gravidade
            velocity.y += GRAVITY * dt;

            // Move o jogador
            player.move(velocity * dt);

            // Colisão simples com a plataforma
            sf::FloatRect playerBounds = player.getGlobalBounds();
            sf::FloatRect platformBounds = platform.getGlobalBounds();

            if (playerBounds.intersects(platformBounds) && velocity.y > 0) {
                player.setPosition(player.getPosition().x, platform.getPosition().y - player.getSize().y);
                velocity.y = 0;
                onGround = true;
            }

            // Reseta se cair fora da tela
            if (player.getPosition().y > 600) {
                player.setPosition(100, 500);
                velocity = sf::Vector2f(0, 0);
                onGround = true;
            }

            // Renderização
            window.clear(sf::Color::Black);
            window.draw(platform);
            window.draw(player);
            window.display();
        }

    return 0;
}
*/






// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
