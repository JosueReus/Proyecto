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
   sf::VideoMode VMode(800, 600, 32);
   sf::RenderWindow Window(VMode, "Project_1",sf::Style::Default, settings);
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


//   sf::Sprite sprite;
//   sprite.setTexture(Image);

   // Declare and load a texture


//// How many buttons does joystick #0 support?
//unsigned int buttons = sf::Joystick::getButtonCount(0);
//// Does joystick #0 define a X axis?
//bool hasX = sf::Joystick::hasAxis(0, sf::Joystick::X);
//// Is button #2 pressed on joystick #0?
//bool pressed = sf::Joystick::isButtonPressed(0, 2);
//// What's the current position of the Y axis on joystick #0?
//float position = sf::Joystick::getAxisPosition(0, sf::Joystick::Y);

 sf::Texture texture;
 if(!texture.loadFromFile("personaje/Bleach/Ichigo/right1.png"))
    return -1;




    //sf::IntRect(x,y,32,32)

 // Create a sprite
 sf::Sprite sprite;
 sprite.setTexture(texture);
 sprite.setTextureRect(sf::IntRect(0, 0, 151, 200));
 //texture.loadFromFile("personaje/Bleach/Ichigo/right1.png");
 sprite.setScale (4.0, 4.0);
 sprite.setPosition(sf::Vector2f(x,y));

//Window.setVerticalSyncEnabled(true);
//Window.setFramerateLimit (60);

 // absolute position
   while(Window.isOpen())
   {
       //sprite.move(sf::Vector2f(0.1, 0));

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
                texture.loadFromFile("personaje/Bleach/Ichigo/Right/right2.png");

            if(right%3==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/Right/right3.png");
            if(right%4==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/Right/right4.png");
            if(right%5==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/Right/right5.png");
            if(right%6==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/Right/right6.png");
            if(right%7==0)
                texture.loadFromFile("personaje/Bleach/Ichigo/Right/right7.png");
//            texture.loadFromFile("personaje/Bleach/Ichigo/right1.png");
//            else
//            texture.loadFromFile("personaje/Bleach/Ichigo/right2.png");

//    for(int i=0;i<7;i++)
//    {
//        string str="personaje/Bleach/Ichigo/right1";
//      //  str+='1'+i;
//        str+=".png";
//        texture.loadFromFile("personaje/Bleach/Ichigo/right1.png");
    //}


            sprite.move(sf::Vector2f(3, 0));
            right++;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
//            if(left%2==0)
//            texture.loadFromFile("personaje/left1.png");
//            else
//            texture.loadFromFile("personaje/left2.png");
//
//            left++;
//            sprite.move(sf::Vector2f(-0.1, 0));


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
//             if(left%8==0)
//                texture.loadFromFile("personaje/Bleach/Ichigo/left7.png");
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
            sprite.move(sf::Vector2f(0, 0.1));
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
float x = sf::Joystick::getAxisPosition(0, sf::Joystick::X);
float y = sf::Joystick::getAxisPosition(0, sf::Joystick::Y);
sprite.move(x, y);


        cont++;
        // Rotate it by 45 degrees

       Window.clear(sf::Color(0,0,0));
       Window.draw(sprite);
       Window.display();
   }
    return 0;
}
