#include <SFML/Graphics.hpp>
#include <iostream>

export module Beginning;

const sf::Texture textureStart("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Start.jpg");
const sf::Texture textureQ1("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q1.jpg");
const sf::Texture textureC11("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\C1.1.jpg");
const sf::Texture textureC12("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\C1.2.jpg");
const sf::Texture textureC13("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\C1.3.jpg");
const sf::Texture textureQ2("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q2.jpg");
const sf::Texture textureQ21("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q2.1.jpeg");
const sf::Texture textureQ22("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q2.2.jpeg");
const sf::Texture textureQ23("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q2.3.jpeg");
const sf::Texture textureQ3("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q3.jpeg");
const sf::Texture textureQ31("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q3.1.jpeg");
const sf::Texture textureQ32("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q3.2.jpeg");
const sf::Texture textureQ33("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q3.3.jpeg");
const sf::Texture textureQ4("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q4.jpeg");
const sf::Texture textureQ41("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q4.1.jpeg");
const sf::Texture textureQ42("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q4.2.jpeg");
const sf::Texture textureQ43("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q4.3.jpeg");
const sf::Texture textureQ5("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q5.jpeg");
const sf::Texture textureQ51("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q5.1.jpeg");
const sf::Texture textureQ52("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q5.2.jpeg");
const sf::Texture textureQ53("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q5.3.jpeg");
const sf::Texture textureQ6("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q6.jpeg");
const sf::Texture textureQ61("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q6.1.jpeg");
const sf::Texture textureQ62("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q6.2.jpeg");
const sf::Texture textureQ63("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q6.3.jpeg");
const sf::Texture textureQ7("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q7.jpeg");
const sf::Texture textureQ71("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q7.1.jpeg");
const sf::Texture textureQ72("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q7.2.jpeg");
const sf::Texture textureQ73("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q7.3.jpeg");
const sf::Texture textureQ8("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q8.jpeg");
const sf::Texture textureQ81("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q8.1.jpeg");
const sf::Texture textureQ82("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q8.2.jpeg");
const sf::Texture textureQ83("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q8.3.jpeg");
const sf::Texture textureQ9("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q9.jpeg");
const sf::Texture textureQ91("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q9.1.jpeg");
const sf::Texture textureQ92("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q9.2.jpeg");
const sf::Texture textureQ93("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q9.3.jpeg");
const sf::Texture textureQ10("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q10.jpeg");
const sf::Texture textureQ101("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q10.1.jpeg");
const sf::Texture textureQ102("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q10.2.jpeg");
const sf::Texture textureQ103("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q10.3.jpeg");
const sf::Texture textureQ11("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q11.jpeg");
const sf::Texture textureQ111("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q11.1.jpeg");
const sf::Texture textureQ112("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q11.2.jpeg");
const sf::Texture textureQ113("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q11.3.jpeg");
const sf::Texture textureQ12("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q12.jpeg");
const sf::Texture textureQ121("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q12.1.jpeg");
const sf::Texture textureQ122("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q12.2.jpeg");
const sf::Texture textureQ123("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q12.3.jpeg");
const sf::Texture textureQ13("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q13.jpeg");
const sf::Texture textureQ131("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q13.1.jpeg");
const sf::Texture textureQ132("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q13.2.jpeg");
const sf::Texture textureQ133("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\Q13.3.jpeg");



import Stats;

const sf::Font font("C:\\Users\\esrij\\source\\repos\\HELPMEAAAAH\\inter.ttf");
sf::Sprite sprite(textureStart);
sf::Text text(font, "HELP", 50);

export int Beginning()
{
    int Choice = 0;
    int step = 0;
    // Create the main window
    sf::RenderWindow window(sf::VideoMode({ 1600, 720 }), "Aishidemasu");
    window.setKeyRepeatEnabled(false);

    // Create a graphical text to display
    text.setPosition({ 0.f, 450.f });

    while (window.isOpen())
    {
        if (Affection >= 50) {
            return 1;
        }
        if (Hate >= 50) {
            return 2;
        }
        if (Neutral >= 50) {
            return 3;
        }

        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        if (step == 0)
            //question1
        {
            sprite.setTexture(textureQ1);
            text.setString("Hi! Nice to meet you! \n1: (Nice to meet you too!)\n2: (Hi)\n3. (*ignore her*)");

            //answers
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureC11);
                text.setString("");
                Affection += 10;
                step = 1;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureC12);
                text.setString("hi...");
                Neutral += 10;
                step = 1;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureC13);
                text.setString("...");
                Hate += 10;
                step = 1;
            }
        }
        //pauze
        else if (step == 1)
        {
            text.setString("\n(Press Enter to continue)");

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 2;
            }
        }
        //question
        else if (step == 2)
            //question2
        {
            sprite.setTexture(textureQ2);
            text.setString("The weather's nice right?\n1:(Yeah but not as nice as you~)\n2: (Yeah, I love rainy days.)\n3: (No. I fell down the stairs because they were slick with rain.)\n");
            //answers
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ21);
                text.setString(".//. Thanks :)");
                Affection += 10;
                step = 3;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ22);
                text.setString("Same!!");
                Neutral += 10;
                step = 3;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ23);
                text.setString("Oh my gosh, I'm so sorry that happened to you!");
                Hate += 10;
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
            sprite.setTexture(textureQ3);
            text.setString("So, do you like anime? >w<\n1: Yeah, for sure!! I love anime\n2: I guess...\n3: You watch anime? Hah, that's stupid.\n");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ31);
                text.setString("Aaah, That's so fun!!");
                Affection += 10;
                step = 5;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ32);
                text.setString("Ah.");
                Neutral += 10;
                step = 5;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ33);
                text.setString("Oh- uhm. I- I'm sorry.");
                Hate += 10;
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
            sprite.setTexture(textureQ4);
            text.setString("I went to the hairdresser yesterday, what do you think ? \n1 : (I love it!You're so pretty!)\n2: (It's cool.)\n3 : (...You're very brave for expressing yourself.)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ41);
                text.setString("Thank you 0///0, you're.. handsome, too, you know?");
                Affection += 10;
                step = 7;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ42);
                text.setString("Oh. Okay, thanks.");
                Neutral += 10;
                step = 7;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ43);
                text.setString("W- wh- w- what?.. Um. Thank- you?");
                Hate += 10;
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
            sprite.setTexture(textureQ5);
            text.setString("Your hair's pretty fun.\n1: (That compliment is even better coming from you ;))\n2: (Thanks.)\n3: (...I'm bald..?)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ51);
                text.setString("0/////0");
                Affection += 10;
                step = 9;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ52);
                text.setString("No problem :)");
                Neutral += 10;
                step = 9;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ53);
                text.setString("Oh my god, Sorry, the glare got in my eyes...");
                Hate += 10;
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
            sprite.setTexture(textureQ6);
            text.setString("Your skin is so shiny, what products do you use??\n1: (It's nothing compared to yours, you should deff show me a routine!)\n2: (Nivea body wash.)\n3: (Not shampoo...)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ61);
                text.setString("For sure~");
                Affection += 10;
                step = 11;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ62);
                text.setString("Oh, I like nivea too");
                Neutral += 10;
                step = 11;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ63);
                text.setString("...Oh. Funny. Real jokester over here.");
                Hate += 10;
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
            sprite.setTexture(textureQ7);
            text.setString("What kinda music do you like?\n1: (Probably the same as yours, let's share earbuds sometime~)\n2: (Y'know, pop, the usual.)\n3: (Funeral music, metal pole clanging. YOU wouldn't understand.)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ71);
                text.setString("Kya! Yeah, defenitly .///.");
                Affection += 10;
                step = 13;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ72);
                text.setString("Yeah, fair, I think Taylor Swift's pretty good.");
                Neutral += 10;
                step = 13;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ73);
                text.setString("you don't know ANYTHING about me.");
                Hate += 10;
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
            sprite.setTexture(textureQ8);
            text.setString("This cafe is so nice, right!\n1: (Yeah, you're so creative for picking this! I'm having a blast!)\n2: (Yup)\n3: (Not really.)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ81);
                text.setString("Thanks! :)");
                Affection += 10;
                step = 15;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ82);
                text.setString(":)");
                Neutral += 10;
                step = 15;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ83);
                text.setString("Oh. Sorry.");
                Hate += 10;
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
            //questionBase
        else if (step == 16)
        {
            sprite.setTexture(textureQ9);
            text.setString("What are you gonna order?\n1: (I'm not sure yet, nothing here looks as good as you do..)\n2: (Probably just a drink, how about you?)\n3: (Nothing, I want to leave, honestly.)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ91);
                text.setString("... o///o... t- thanks");
                Affection += 10;
                step = 17;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ92);
                text.setString("I think I'm just gonna get a drink too.");
                Neutral += 10;
                step = 17;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ93);
                text.setString("*mumbled* Leave, then.*");
                Hate += 10;
                step = 17;
            }
            }
            //pauze2
        else if (step == 17)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 18;
            }
            }
            //questionBase
        else if (step == 18)
        {
            sprite.setTexture(textureQ10);
            text.setString("The music here is so loud...\n1: (I was just thinking that! Hold on... *ask to turn the music down*)\n2: (I think it's okay.)\n3: (You're so dramatic.)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ101);
                text.setString("Thank you!!");
                Affection += 10;
                step = 19;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ102);
                text.setString("Oh..");
                Neutral += 10;
                step = 19;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ103);
                text.setString("...");
                Hate += 10;
                step = 19;
            }
            }
            //pauze2
        else if (step == 19)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 20;
            }
            }
            //questionBase
        else if (step == 20)
        {
            sprite.setTexture(textureQ11);
            text.setString("What's your favourite animal? Mine's a cat!\n1: (I love pussy too!!!)\n2: (Dunno, anything fluffy)\n3: (DOGS)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ111);
                text.setString("awhh");
                Affection += 10;
                step = 21;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ112);
                text.setString("Yeah, i like fluffy animals too");
                Neutral += 10;
                step = 21;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ113);
                text.setString("...........");
                Hate += 10;
                step = 21;
            }
            }
            //pauze2
        else if (step == 21)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 22;
            }
            }
            //questionBase
        else if (step == 22)
        {
            sprite.setTexture(textureQ12);
            text.setString("What do you do for a living ? \n1 : (I earn enough for the both of us)\n2 : (Office job)\n3 : (None of your business)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ121);
                text.setString(".///. ");
                Affection += 10;
                step = 23;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ122);
                text.setString("ah, yeah, ait.");
                Neutral += 10;
                step = 23;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ123);
                text.setString("Not like i care anyway");
                Hate += 10;
                step = 23;
            }
            }
            //pauze2
        else if (step == 23)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 24;
            }
            }
            //questionBase
        else if (step == 24)
        {
            sprite.setTexture(textureQ13);
            text.setString("What do you think of my outfit? I put a lot of effort into making it.\n1: (I was about to say!! It's so cute, just like you!)\n2: (It's nice)\n3: (You look five, I want to barf)");
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num1))
            {
                sprite.setTexture(textureQ131);
                text.setString("0////0");
                Affection += 10;
                step = 25;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num2))
            {
                sprite.setTexture(textureQ132);
                text.setString("Thank you");
                Neutral += 10;
                step = 25;
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Num3))
            {
                sprite.setTexture(textureQ133);
                text.setString("WHAT! T^T");
                Hate += 10;
                step = 25;
            }
            }
            //pauze2
        else if (step == 25)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter))
            {
                step = 26;
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

//    // Start the game loop
//    while (window.isOpen())
//    {
//        // Process events
//        while (const std::optional event = window.pollEvent())
//        {
//            // Close window: exit
//            if (event->is<sf::Event::Closed>())
//                window.close();
//        }
//
//        // Clear screen
//        window.clear();
//
//        // Draw the sprite
//        window.draw(sprite);
//
//        // Draw the string
//        window.draw(text);
//
//        // Update the window
//        window.display();
//    }
//    return 0;
//}