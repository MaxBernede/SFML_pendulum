#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cube.hpp"
#include "FPSCounter.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Rhombus Example");

    Cube rhombus1(100.0f, 100.0f);
    Cube rhombus2(100.0f, 300.0f);
    Cube rhombus3(300.0f, 100.0f);
    Cube rhombus4(300.0f, 300.0f);
    Cube rhombus5(500.0f, 100.0f);
    Cube rhombus6(500.0f, 300.0f);

    FPSCounter fpsCounter;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        // Draw the rhombuses
        window.draw(rhombus1);
        window.draw(rhombus2);
        window.draw(rhombus3);
        window.draw(rhombus4);
        window.draw(rhombus5);
        window.draw(rhombus6);
        //window.draw();

        fpsCounter.update();
        fpsCounter.draw(window);

        window.display();
    }

    return 0;
}
