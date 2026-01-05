#include <SFML/Graphics.hpp>
#include <iostream>

export module Bad_ending;


import Stats;

const sf::Texture textureStart(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\Start.jpg)");
const sf::Texture textureQB1(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB1.jpeg)");
const sf::Texture textureQB11(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB1.1.jpeg)");
const sf::Texture textureQB12(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB1.2.jpeg)");
const sf::Texture textureQB2(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB2.jpeg)");
const sf::Texture textureQB21(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB2.1.jpeg)");
const sf::Texture textureQB22(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB2.jpeg)");
const sf::Texture textureQB3(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB3.jpeg)");
const sf::Texture textureQB31(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB3.1.jpeg)");
const sf::Texture textureQB32(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB3.2.jpeg)");
const sf::Texture textureQB4(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB4.jpeg)");
const sf::Texture textureQB41(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB4.1.jpeg)");
const sf::Texture textureQB42(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB4.2.jpeg)");
const sf::Texture textureQB5(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB5.jpeg)");
const sf::Texture textureQB51(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB5.1.jpeg)");
const sf::Texture textureQB52(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB5.2.jpeg)");
const sf::Texture textureQB6(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB6.jpeg)");
const sf::Texture textureQB61(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB6.1.jpeg)");
const sf::Texture textureQB62(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB6.2.jpeg)");
const sf::Texture textureQB7(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB7.jpeg)");
const sf::Texture textureQB71(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB7.1.jpeg)");
const sf::Texture textureQB72(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB7.2.jpeg)");
const sf::Texture textureQB8(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB8.jpeg)");
const sf::Texture textureQB81(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QB8.1.jpeg)");
const sf::Texture textureQBD(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QBD.jpeg)");
const sf::Texture textureQBS(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\QBS.jpeg)");
const sf::Font font(R"(C:\Users\esrij\source\repos\HELPMEAAAAH\inter.ttf)");
sf::Sprite sprite(textureStart);
sf::Text text(font, "HELP", 50);


export int Bad_ending() {
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
            sprite.setTexture(textureQB1);
            text.setPosition({ 0.f, 200.f });
            text.setString("*She reaches out and grabs your hand roughly, \npulling you away from the table with force. \nShe's stronger than she looks.*\n1: (*You try and strugle, \nbut her nails dig into your wrist.* \n'What are you doing?' you ask.*)\n2: (*You don't want to make a scene, \nso you follow silently*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQB11);
                text.setPosition({ 0.f, 350.f });
                text.setString("shut up!'*she hisses, \nher nails digging in even deeper. \nYou feel blood dripping down your wrist.*");
                Dominant += 10;
                step = 1;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQB12);
                text.setPosition({ 0.f, 550.f });
                text.setString("*She pulls you out the front door*");
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
            sprite.setTexture(textureQB2);
            text.setPosition({ 0.f, 350.f });
            text.setString("*The two of you are now outside, \nand the streetlights are on.\n She starts to pull you in the direction of an alleyway.*\n1: (*You strugle again and try to pull away.* \n'Let go of me you crazy bitch!')\n2: ('Where are you taking me?')");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQB21);
                text.setPosition({ 0.f, 350.f });
                text.setString("She lets go of your wrist and pain flashes trough you.\n You stumble back, and before you know it, \nshe has a knife in her hands.* 'Keep. Walking.'");
                Dominant += 10;
                step = 3;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQB21);
                text.setPosition({ 0.f, 350.f });
                text.setString("*She doesn't reply and simply pulls you into the allyway. \nShe lets go of your wrist, and you stretch it, \ngrimacing in pain. When you look over, \nyou see she has a knife in her hand.*");
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
            sprite.setTexture(textureQB3);
            text.setPosition({ 0.f, 350.f });
            text.setString("*She steps forewards and presses the knife against your troath, \nand you stumble back, your back hitting the wall. \nShe follows in one swift motion.*\n1: ('You- You're crazy!')\n2: (*Your eyes go wide in shock, and your body freezes*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQB31);
                text.setPosition({ 0.f, 550.f });
                text.setString("*She simply smiles at you, the grin almost canine.*");
                Dominant += 10;
                step = 5;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQB32);
                text.setPosition({ 0.f, 550.f });
                text.setString("*She smiles at you and runs a hand along your chest*");
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
            sprite.setTexture(textureQB4);
            text.setPosition({ 0.f, 350.f });
            text.setString("'Why were you so mean to me?'\n1: ('Because you were asking weird questions.')\n2: ('Um- I'm so sorry.')");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQB41);
                text.setPosition({ 0.f, 550.f });
                text.setString("*She grimaces, pressing the knife into your throat slightly.*");
                Dominant += 10;
                step = 7;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQB42);
                text.setPosition({ 0.f, 550.f });
                text.setString("'I don't want your slimy excuses.'");
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
            sprite.setTexture(textureQB5);
            text.setPosition({ 0.f, 450.f });
            text.setString("*She presses herself up against you and \npresses her lips against yours.*\n1: (*You turn your head away in disgust*)\n2: ('Stop-')");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQB51);
                text.setPosition({ 0.f, 500.f });
                text.setString("She pulls the knife away from your throat \nand stabs you in the shoulder with an agonized yell.*");
                step = 9;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQB52);
                text.setPosition({ 0.f, 500.f });
                text.setString("She pulls the knife away from your throat and stabs you in the shoulder with an agonized yell.*");
                Submissive += 10;
                step = 9;
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
        //questionBase
        else if (step == 10)
        {
            sprite.setTexture(textureQB6);
            text.setPosition({ 0.f, 250.f });
            text.setString("'WHY WON'T YOU LOVE ME?' *She screams, \ntears running down her face as she points the knife at you.*\n1: (*You stay standing, adrenaline pumping through your veins.*\n 'You crazy bitch! Why would you do this?!')\n2: (*You cry out at the pain and crumple to the ground,\n hyperventilating.* 'Sorry- I- no, please-')");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQB61);
                text.setPosition({ 0.f, 450.f });
                text.setString("She screams again, the yell almost animalistic. \nShe plunges her knife into your other shoulder, \ncausing you to collapse from the pain.*");
                step = 11;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQB62);
                text.setPosition({ 0.f, 450.f });
                text.setString("*Her face crumples, and she crouches down to your level.* \n'You're goddamn pathetic.' \nShe plunges the knife into your others shoulder, \nsadistic glee on her face.");
                Submissive += 10;
                step = 11;
            }
        }
        //pauze2
        else if (step == 11)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 12;
            }
        }
        //questionBase
        else if (step == 12)
        {
            sprite.setTexture(textureQB7);
            text.setPosition({ 0.f, 350.f });
            text.setString("*She stands over you, knife dripping with blood,\n laughing hysterically.*\n1: (*You grunt and attempt to \npush yourself up and away*)\n2: (*Your body shudders with sobs \nas you curl in on yourself*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQB71);
                text.setPosition({ 0.f, 450.f });
                text.setString("*She kicks you right where she just stabbed you,\ncausing you to scream out in pain.*");
                step = 13;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQB72);
                text.setPosition({ 0.f, 550.f });
                text.setString("*she presses her foot into\nthe open wound in your shoulder.*");
                Submissive += 10;
                step = 13;
            }
        }
        //pauze2
        else if (step == 13)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 14;
            }
        }
        //questionBase
        else if (step == 14)
        {
            sprite.setTexture(textureQB8);
            text.setPosition({ 0.f, 200.f });
            text.setString("*she crouches down to your level, \nand the smile slips off her face.* \n'You know, I really loved you. I've known you for years now. \nAnd you really hurt me. \nShe pulls up her sleeve and makes a \ndeep horizontal cut down her left wrist, \nthe blood spilling out dark and red.\n1: (*You cringe away*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQB81);
                text.setPosition({ 0.f, 500.f });
                text.setString("*she barely notices, slitting her other wrist calmly.*\n'now we can die together'");
                step = 15;
            }
        }
        //pauze2
        else if (step == 15)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 16;
            }
        }
        else if (step == 16)
            if (Dominant > Submissive)
            {
                sprite.setTexture(textureQBD);
                text.setPosition({ 0.f, 250.f });
                text.setString("*With one last push, you manage to crawl away a few centimiters. \nBut against all odds, \nshe manages to reach out one last final time, \nplunging the knife into your heart.*\nTHE END\nPress ESC to exit.");
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Escape))
                {
                    window.close();
                }
            }
            else
            {
                sprite.setTexture(textureQBS);
                text.setPosition({ 0.f, 200.f });
                text.setString("*you lay there, \nshuddering as your blood flows out onto the pavement. \nShe reaches out and grabs your hand, \nand you don't have the power to pull away. \nYour blood flows into each other, \ndrowning out all other colours\nTHE END\nPress ESC to exit.");
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