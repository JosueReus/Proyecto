#include <SFML/Graphics.hpp>
#include <Joystick.hpp>
#include<iostream>

using namespace std;


void saltar()
{


}
int main()
{
if(sf::Joystick::isConnected(0))
    cout<<"CONNECTED"<<endl;
else
    cout<<"NOT CONNECTED"<<endl;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;
   sf::VideoMode VMode(1366, 768, 32);
   sf::RenderWindow Window(VMode, "Project_1",sf::Style::Fullscreen, settings);
   Window.setFramerateLimit(24);



int x=0;
int right=1;
int left=1;
int y=100;
int down=1;
int up=1;
int cont=0;
int jx=0;
int jy=0;
sf::View view;


 sf::Texture texture;
 if(!texture.loadFromFile("SuperBoxeador/0.png"))
    return -1;

texture.setSmooth(true);


sf::Vector2f targetSize(150.0f, 300.0f);


 sf::Sprite sprite;
 sprite.setTexture(texture);

 sprite.setScale(
    targetSize.x / sprite.getLocalBounds().width,
    targetSize.y / sprite.getLocalBounds().height);

 sprite.setPosition(sf::Vector2f(x,y));

   while(Window.isOpen())
   {

       sf::Event Event;
       while( Window.pollEvent(Event))
       {
           switch(Event.type)
           {
           case sf::Event::Closed:
            Window.close();
            break;
           default:
            break;

           }
       }
       if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {

            if(right%2==0)
                texture.loadFromFile("SuperBoxeador/0.png");

            if(right%3==0)
                texture.loadFromFile("SuperBoxeador/0_1.png");


            sprite.move(sf::Vector2f(3, 0));
            right++;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {


      if(left%2==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/left2.png");

            if(left%3==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/left3.png");
            if(left%4==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/left4.png");
            if(left%5==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/test5.png");
            if(left%6==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/left6.png");
            if(left%7==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/left7.png");

        sprite.move(sf::Vector2f(-3, 0));
        left++;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            if(down%8==0)
            texture.loadFromFile("personaje/down1.png");
            else
            texture.loadFromFile("personaje/down2.png");

            down++;
            sprite.move(sf::Vector2f(0, 3));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            if(up%8==0)
            texture.loadFromFile("personaje/up1.png");
            else
            texture.loadFromFile("personaje/up2.png");

            up++;
            sprite.move(sf::Vector2f(0, -0.1));
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            exit(0);

        }
               if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {

            if(cont%2==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque1.png");


            if(cont%3==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque2.png");
            if(cont%4==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque3.png");
            if(cont%5==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque4.png");
            if(cont%6==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque5.png");
            if(cont%7==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque6.png");
        }


        // is button 1 of joystick number 0 pressed?
if (sf::Joystick::isButtonPressed(0, 2))
{        if(cont%2==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque1.png");

            if(cont%3==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque2.png");
            if(cont%4==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque3.png");
            if(cont%5==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque4.png");
            if(cont%6==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque5.png");
            if(cont%7==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/ataque/ataque6.png");
}

// what's the current position of the X and Y axes of joystick number 0?
sf::Vector2f xAxis=sprite.getPosition();
float x = sf::Joystick::getAxisPosition(0, sf::Joystick::X)*0.3;
float y = sf::Joystick::getAxisPosition(0, sf::Joystick::Y);
sprite.move(x, 0);

if (Event.type == sf::Event::JoystickMoved)
{
    if (Event.joystickMove.axis == sf::Joystick::X &&Event.joystickMove.position>0)
    {
        std::cout << "X axis moved!" << std::endl;
        std::cout << "joystick id: " << Event.joystickMove.joystickId << std::endl;
        std::cout << "new position: " << Event.joystickMove.position << std::endl;

        {
            right++;
            if(right%2==0)
                texture.loadFromFile("SuperBoxeador/0.png");

            if(right%3==0)
                texture.loadFromFile("SuperBoxeador/0_1.png");



}
    }
}


        cont++;
        // Rotate it by 45 degrees

       Window.clear(sf::Color::White);
       Window.draw(sprite);
       Window.display();
   }
    return 0;
}
