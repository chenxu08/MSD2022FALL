#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

//#include <SFML/Graphics.hpp/CircleShape.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

	sf::CircleShape shape(50.f);
    sf::CircleShape square(50.f,4);
        sf::Text text;
        text.setString("Hello world");
        text.setCharacterSize(100);
        text.setFillColor(sf::Color::Red);



// set the shape color to green
shape.setFillColor(sf::Color(100, 250, 50));
        square.setFillColor(sf::Color::Black);
// window.draw(shape);
//        window.draw(square);
        window.draw(text);
	// end the current frame
        window.display();
    }

    return 0;
}
