#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
using namespace std;
using namespace sf;

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(1080, 1080), "My window");
    CircleShape hoop;
        int direction = 0;
        hoop.setRadius(50.f);
        hoop.setFillColor(Color::White);
        hoop.setOutlineThickness(2);
        hoop.setOutlineColor(Color::Blue);
        hoop.setPosition(Vector2f(window.getSize().y - 2 * hoop.getRadius(), 10.f));
    CircleShape a;
        a.setRadius(50.f);
        a.setFillColor(Color::Red);
        a.setPosition(Vector2f(0, 10.f));
    CircleShape b;
        b.setRadius(5.f);
        b.setFillColor(Color::Black);
    int index =0;
    int hp=1;
    Text c;
    c.setString("You win!");
    c.setCharacterSize(100);
    c.setFillColor(Color::Green);
    c.setPosition(0.0, 0.0);
    c.setStyle(sf::Text::Bold | sf::Text::Underlined);



    

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed||hp==0)
                window.close();
        }
        
        
        
        if (hoop.getPosition().y <= 0){
            direction = 1;}
        else if (hoop.getPosition().y + 2 * hoop.getRadius() >= window.getSize().y){
                    direction = 0;
            
        }
                if (true&&(hp!=0))
                {
                    if (direction == 0)
                    {hoop.move(0, -0.1);}
                    else
                    {hoop.move(0, 0.1);}
                }
        a.setPosition(a.getPosition().x, Mouse::getPosition(window).y);
        if(event.KeyPressed && event.key.code == Keyboard::Space){
             b.setFillColor(Color::Yellow);
            b.setPosition(50.0, a.getPosition().y+50);
            index =1;
             }
        if(true&&(hp!=0)){
            if(index==1){
                b.move(0.2,0);
            }
        }
        if(b.getGlobalBounds().intersects(hoop.getGlobalBounds())){
            hp--;
        }
        if (true){
            if(hp==0){window.close();
        }}

        // clear the window with black color
        window.clear(sf::Color::Black);

       
       
 window.draw(hoop);
 window.draw(b);
 window.draw(a);
 window.draw(c);
        
    // end the current frame
        window.display();
    }

    return 0;
}
