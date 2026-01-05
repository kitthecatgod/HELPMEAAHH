#include <SFML/Graphics.hpp>
#include <iostream>

export module Neutral_ending;

import Stats;

const sf::Texture textureStart("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Start.jpg");
const sf::Texture textureQN1("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN1.jpeg");
const sf::Texture textureQN11("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN1.1.jpeg");
const sf::Texture textureQN12("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN1.2.jpeg");
const sf::Texture textureQN2("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN2.jpeg");
const sf::Texture textureQN21("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN2.1.jpeg");
const sf::Texture textureQN22("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN2.2.jpeg");
const sf::Texture textureQN3("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN3.jpeg");
const sf::Texture textureQN31("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN3.1.jpeg");
const sf::Texture textureQN32("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN3.2.jpeg");
const sf::Texture textureQN4("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN4.jpeg");
const sf::Texture textureQN41("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN4.1.jpeg");
const sf::Texture textureQN42("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN4.2.jpeg");
const sf::Texture textureQN5("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN5.jpeg");
const sf::Texture textureQN51("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN5.1.jpeg");
const sf::Texture textureQN6("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN6.jpeg");
const sf::Texture textureQN7("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QN7.jpeg");
const sf::Font font("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\inter.ttf");
sf::Sprite sprite(textureStart);
sf::Text text(font, "HELP", 50);

export int Neutral_ending() {
    int Choice = 0;
    int step = 0;
    // Create the main window
    sf::RenderWindow window(sf::VideoMode({ 1600, 720 }), "Aishidemasu");
    window.setKeyRepeatEnabled(false);

    // Create a graphical text to display
    text.setPosition({ 0.f, 350.f });

    while (window.isOpen())
    {

        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        //question1
        if (step == 0)
        {
            sprite.setTexture(textureQN1);
            text.setPosition({ 0.f, 350.f });
            text.setString("*She leans on the table with her elbow, \nlooking a little bored with your answers.*\n'The food isn't coming, \ndo you wanna go to my apartment? I can cook.'\n1: (Yeah, I'm so hungry, I could use some food.)\n2: (Uhm.. I don't really know about that.)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQN11);
                text.setPosition({ 0.f, 550.f });
                text.setString("*She smiles.* 'Yay! let's go.'");
                Dominant += 10;
                step = 1;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQN12);
                text.setPosition({ 0.f, 550.f });
                text.setString("*She smiles.* 'It'll be fine, silly. I'm not a murderer!'");
                Submissive += 10;
                step = 1;
            }
        }
        //pauze2
        else if (step == 1)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 2;
            }
        }
        //questionBase
        else if (step == 2)
        {
            sprite.setTexture(textureQN2);
            text.setPosition({ 0.f, 350.f });
            text.setString("*You walk through her apartment, surrounded by strange, \nunsettling dolls.* From the kitchen, you hear her call out.\n'You find anything fun?!'\n1: (You say nothing, hoping she leaves you alone.)\n2: (No! It's fine!)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQN21);
                text.setPosition({ 0.f, 550.f });
                text.setString("*She doesn't hear you reply, so she stays quiet, \nfocusing on the ramen she's cooking.'");
                Dominant += 10;
                step = 3;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQN21);
                text.setPosition({ 0.f, 550.f });
                text.setString("'Alright!'");
                Submissive += 10;
                step = 3;
            }
        }
        //pauze2
        else if (step == 3)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 4;
            }
        }
        //questionBase
        else if (step == 4)
        {
            sprite.setTexture(textureQN3);
            text.setPosition({ 0.f, 300.f });
            text.setString("*You wander into her bedroom and freeze as you notice the walls \nare covered in pictures. Of you.*\n1: (Immediately you look further, \nwanting to know what the hell this is.)\n2: (You stay frozen, perplexed at the sight\n of so many pictures of you.)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQN31);
                text.setPosition({ 0.f, 250.f });
                text.setString("*You step forward and look through the pictures, \nseeing ones of you in your own apartment, ones of you outside, \nthat have clearly been taken through bushes. \nChildhood photos of you that even you yourself doesn't own. \nPictures of you with your exes and pictures of you with your family. \nIt's the most creepy thing you've ever seen.*");
                Dominant += 10;
                step = 5;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQN32);
                text.setPosition({ 0.f, 250.f });
                text.setString("*From your point of view, you can clearly see the pictures, \nseeing ones of you in your own apartment, ones of you outside, \nthat have clearly been taken through bushes. \nChildhood photos of you that even you yourself doesn't own. \nPictures of you with your exes and pictures of you with your family. \nIt's the most creepy thing you've ever seen.*");
                Submissive += 10;
                step = 5;
            }
        }
        //pauze2
        else if (step == 5)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 6;
            }
        }
        //questionBase
        else if (step == 6)
        {
            sprite.setTexture(textureQN4);
            text.setPosition({ 0.f, 150.f });
            text.setString("Snapping out of the slight haze you were in, you make a run for it. \nYou hear the soft sizzling of the pan in the kitchen, \nbut get to the door unscathed. \nPulling hard on the handle, with a shiver down your spine, \nyou realize it's locked, and you do not have the key.*\n1. (*You run towards the bathroom, \nlocking yourself in there instead, \nscrambling for your phone to call the police.*)\n2: (*You freeze.*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQN41);
                text.setPosition({ 0.f, 550.f });
                text.setString("You hear soft footsteps through the door,\nand hold your breath.*");
                Dominant += 10;
                step = 7;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQN41);
                text.setPosition({ 0.f, 450.f });
                text.setString("*You hear soft footsteps behind you, you realize you need to get out. \nNow. But since you can't, you run to the next best place, \nthe bathroom.");
                Submissive += 10;
                step = 7;
            }
        }
        //pauze2
        else if (step == 7)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 8;
            }
        }
        //questionBase
        else if (step == 8)
        {
            sprite.setTexture(textureQN5);
            text.setPosition({ 0.f, 200.f });
            text.setString("*In the bathroom you stay still until you know for sure, \nthe coast is clear. \nYou quickly get into your phone and quickly dial 911. \nYou explain the situation to the operator and they say \npolice is being sent your way.\n1. (*You stay in the bathroom until you hear police\n enter the apartment.*)\n2. (*You get out and hope she doesn't kill you.*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQN6);
                text.setPosition({ 0.f, 50.f });
                text.setString("*Once you get out, you follow the noise until you see her, \nbeing held by two police officers. \nTears are streaming down her face as she spots you.*\n'How could you do this to me!?' \n*She shouts. Crying and wailing while the officers drag her away. \nYou walk along with them and watch as \nthey put her in the police car. \nShe's still screaming.* \n'How dare you!? I'll never forgive you!' *and even* '\nI thought we had something!'\nPress Enter");
                step = 9;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQN51);
                text.setPosition({ 0.f, 550.f });
                text.setString("THE END\nPress ESC to exit.");
                step = 9;
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Escape))
                {
                    window.close();
                }
            }
        }
        //pauze2
        else if (step == 9)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 10;
            }
        }
        else if (step == 10)
        {
            sprite.setTexture(textureQN7);
            text.setPosition({ 0.f, 200.f });
            text.setString("One of the police officers steps towards you, \nthanking you for calling. \n'We'll take good care of her, \nshe'll be send to a mental institute for at least 2 years. \nShe's had multiple accounts of stalking on her name. \nYou did good, kid.'\nTHE END\nPress ESC to exit.");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Escape))
            {
                window.close();
            }
        }
       

        // Clear screen
        window.clear();

        // Draw the sprite
        window.draw(sprite);

        // Draw the string
        window.draw(text);

        window.display();
    }
    return 0;
}