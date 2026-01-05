#include <SFML/Graphics.hpp>
#include <iostream>

export module Good_ending;

import Stats;

const sf::Texture textureStart("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Start.jpg");
const sf::Texture textureQG1("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG1.jpeg");
const sf::Texture textureQG11("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG1.1.jpeg");
const sf::Texture textureQG12("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG1.2.jpeg");
const sf::Texture textureQG2("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG2.jpeg");
const sf::Texture textureQG21("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG2.1.jpeg");
const sf::Texture textureQG22("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG2.2.jpeg");
const sf::Texture textureQG3("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG3.jpeg");
const sf::Texture textureQG31("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG3.1.jpeg");
const sf::Texture textureQG32("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG3.2.jpeg");
const sf::Texture textureQG4("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG4.jpeg");
const sf::Texture textureQG41("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG4.1.jpeg");
const sf::Texture textureQG42("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG4.2.jpeg");
const sf::Texture textureQG5("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG5.jpeg");
const sf::Texture textureQG51("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG5.1.jpeg");
const sf::Texture textureQG6("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG6.jpeg");
const sf::Texture textureQG61("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG6.1.jpeg");
const sf::Texture textureQG62("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG6.2.jpeg");
const sf::Texture textureQG63("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG6.3.jpeg");
const sf::Texture textureQG64("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QG6.4.jpeg");
const sf::Texture textureQGD("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QGD.jpeg");
const sf::Texture textureQGS("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\QGS.jpeg");
const sf::Font font("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\inter.ttf");
sf::Sprite sprite(textureStart);
sf::Text text(font, "HELP", 50);

export int Good_ending() {

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
            sprite.setTexture(textureQG1);
            text.setString("*She leans over the table and looks at you with sultry eyes.*\n'Wanna go to the bathroom~?'\n*she asks you softly, so no one else but you can hear.*\n1: (*you grin at her, puting your hand on hers.* 'yes, let's go ;)')\n2: (*your eyes go wide, a smile creeping onto your lips.*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQG11);
                text.setPosition({ 0.f, 550.f });
                text.setString("*she lets you take her hand and lead her away from the table*");
                Dominant += 10;
                step = 1;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQG12);
                text.setPosition({ 0.f, 550.f });
                text.setString("*she reaches out and takes your hand, leading you away from the table*");
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
            sprite.setTexture(textureQG2);
            text.setPosition({ 0.f, 450.f });
            text.setString("*You reach the bathroom door*\n1: (*You reach out and open the door, leading her trough. \nYou lock it behind her*)\n2: (*You step aside so she can open it.*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQG21);
                text.setPosition({ 0.f, 550.f });
                text.setString("*she blushes and leans against the wall, \nlooking you up and down trough her lashes.*");
                Dominant += 10;
                step = 3;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQG21);
                text.setPosition({ 0.f, 550.f });
                text.setString("*she opens the door and lets you inside, \nclosing and locking the door behind you.*");
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
            sprite.setTexture(textureQG3);
            text.setPosition({ 0.f, 450.f });
            text.setString("*She looks at you and chews on her plump bottom lip*\n1: (*You push her against the stall door by pinning her\n wrist above her head and dive in for a ravenous kiss.*)\n2: (*You look her up and down and blush*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQG31);
                text.setPosition({ 0.f, 550.f });
                text.setString("*she kisses back hungrily, \narching her back so her chest presses against you*");
                Dominant += 10;
                step = 5;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQG32);
                text.setPosition({ 0.f, 550.f });
                text.setString("*She leans in an kisses you, \ndominating your mouth in a way you didn't know you needed.*");
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
            sprite.setTexture(textureQG4);
            text.setPosition({ 0.f, 350.f });
            text.setString("*She breaks the kiss with a whine. 'hah- do you have a condom?'* \n1: (* You press up against her, \nleaning in so you can wisper in her ear\n 'Yeah, of course, babygirl'*)\n2: (*You look down and realize how much she is affecting you\n by the obvious bulge in your pants. 'Uhm.. no?'*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQG41);
                text.setPosition({ 0.f, 550.f });
                text.setString("*She blushes cherry red* 'you came prepared? \nBut no need, we can do it raw*");
                Dominant += 10;
                step = 7;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQG41);
                text.setPosition({ 0.f, 550.f });
                text.setString("She looks at you for a second before speaking \n'it's fine, we can do it raw'*");
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
            sprite.setTexture(textureQG5);
            text.setPosition({ 0.f, 550.f });
            text.setString("*She starts unbutoning your pants, \nand pulls out a weird looking bottle*\n1: (*what is that?*)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQG51);
                text.setPosition({ 0.f, 500.f });
                text.setString("'lube' *she starts applying it*");
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
        else if (step == 10)
        {
            sprite.setTexture(textureQG6);
            text.setPosition({ 0.f, 150.f });
            text.setString("After the life changing experience you had with Sakura, \nyou stay right there for a second.\n She's so warm and comfortable, \nyou don't want to leave this moment yet.\nFor now, it's like nothing else in the world exists. \nIt's just you and this beautiful girl in your arms. \nAfter you catch your breath, you run a hand through your hair, \nbefore placing it back on her waist.\nPress 1");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQG6);
                text.setPosition({ 0.f, 200.f });
                text.setString("Her body is slick with sweat, as you rocked her world, that much. \n'Okay.' You whisper against her before you lift her up \nso you can slide out of her. \nBut you don't. You pull back again, trying, again. \nBut you don't pull out. You look down at her, completely confused. \nThis has never happened before. \nAfter all, you've never had sex before.\nPress enter");
                step = 11;
            }
        }
        else if (step == 11)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 12;
            }
            }
        else if (step == 12)
        {
            sprite.setTexture(textureQG61);
            text.setPosition({ 0.f, 350.f });
            text.setString("'What?' You ask, a slight tremble in your voice.\nAnd Sakura looks up at you, \na grin slowly spreading on her lips. \n'Something wrong?' She asks, \nbatting her eyelashes innocently.\nPress 1");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQG62);
                text.setPosition({ 0.f, 150.f });
                text.setString("Yes. I can't get out.' \nYou say, getting slightly frustrated. \nYou try again, and realize pulling harder hurts. \n'Of course not.' Sakura smiles. \nAnd you look at her, a mix of confusion, anger, \nand fear in your shaking pupils. \n'What did you do ? ' You ask, \nalmost afraid to hear her answer.\nPress enter");
                step = 13;
            }
            }

        else if (step == 13)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 14;
            }
            }
        else if (step == 14)
        {
            sprite.setTexture(textureQG63);
            text.setPosition({ 0.f, 450.f });
            text.setString("It's gorilla glue.' She smiles, \nand she leans up, running her hands from \nyour hair to your neck.\nPress 1");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQG64);
                text.setPosition({ 0.f, 550.f });
                text.setString("'Now, we're gonna be together forever.\nPress enter");
                step = 15;
            }
            }

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
                sprite.setTexture(textureQGD);
                text.setPosition({ 0.f, 250.f });
                text.setString("Your eyebrows furrow in anger as you throw her against the door \nand pull as hard as you can. \nYou hear the sound of something ripping, \nand then, you're free. \nBut at what cost?\nTHE END\nPress ESC to exit.");
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Escape))
                {
                    window.close();
                }
            }
            else
            {
                sprite.setTexture(textureQGS);
                text.setPosition({ 0.f, 450.f });
                text.setString("*Silent tears stream down your face, as you surrender to your faith.*\nTHE END\nPress ESC to exit.");
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