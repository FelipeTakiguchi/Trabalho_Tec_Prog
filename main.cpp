#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <optional>

class Game
{
public:
    Game()
        : window(sf::VideoMode(sf::Vector2u(800, 600)), "SFML Game Base")
    {
        shape.setRadius(50.f);
        shape.setFillColor(sf::Color::Cyan);
        shape.setPosition(sf::Vector2f(100.f, 100.f));
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
        while (const std::optional<sf::Event> event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
    }

    void update(sf::Time deltaTime)
    {
        sf::Vector2f movement(0.f, 0.f);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
            movement.y -= speed;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
            movement.y += speed;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
            movement.x -= speed;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
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

