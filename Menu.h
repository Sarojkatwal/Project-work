using namespace std;
using namespace sf;
class A
{
private:
	Texture texture;
	Sprite sprite;
	RenderWindow window;
	Font font;
	Text text1,text2,text3,text4,text5;
	SoundBuffer buffer;
	Sound sound;
public:
	int showoptions()
	{
		window.create(sf::VideoMode(1000, 650), "My window");
		window.setPosition(Vector2i(100, 0));
		buffer.loadFromFile("audio/keypress.wav");
		sound.setBuffer(buffer);
		texture.loadFromFile("images/back.png");
		sprite.setTexture(texture);
		sprite.setScale(Vector2f(.9f,.8f));
		sprite.setPosition(-80, -190);
		font.loadFromFile("font/loading.ttf");
		text1.setString("1.New Game");
		text1.setFont(font);
		text1.setCharacterSize(50);
		text1.setFillColor(Color::Red);
		text1.setStyle(Text::Bold);
		text1.setPosition(400, 30);
		text2.setString("2.High Score");
		text2.setFont(font);
		text2.setCharacterSize(50);
		text2.setFillColor(Color::Red);
		text2.setStyle(Text::Bold);
		text2.setPosition(400, 108);
		text3.setString("3.Help");
		text3.setFont(font);
		text3.setCharacterSize(50);
		text3.setFillColor(Color::Red);
		text3.setStyle(Text::Bold);
		text3.setPosition(400, 189);
		text4.setString("4.About");
		text4.setFont(font);
		text4.setCharacterSize(50);
		text4.setFillColor(Color::Red);
		text4.setStyle(Text::Bold);
		text4.setPosition(400, 270);
		text5.setString("5.Exit");
		text5.setFont(font);
		text5.setCharacterSize(50);
		text5.setFillColor(Color::Red);
		text5.setStyle(Text::Bold);
		text5.setPosition(400, 351);
		window.clear();
		window.draw(sprite);
		window.draw(text1);
		window.draw(text2);
		window.draw(text3);
		window.draw(text4);
		window.draw(text5);
		window.display();
		while (window.isOpen())
		{
			Event event;
			while (window.pollEvent(event))
			{
				if (event.type == Event::Closed)
				{
					window.close();
				}
				if (event.type == Event::Resized)
				{
					window.setSize(Vector2u(1000,650));
				}
				if (event.type == Event::MouseButtonPressed)
				{
					if (event.mouseButton.x > 400 && event.mouseButton.x < 595 && event.mouseButton.y>30 && event.mouseButton.y < 80)
					{
						sound.play();
						text1.setFillColor(Color::Green);
						window.clear();
						window.draw(sprite);
						window.draw(text1);
						window.draw(text2);
						window.draw(text3);
						window.draw(text4);
						window.draw(text5);
						window.display();
						sleep(seconds(1));
						text1.setFillColor(Color::Red);
						window.clear();
						window.draw(sprite);
						window.draw(text1);
						window.draw(text2);
						window.draw(text3);
						window.draw(text4);
						window.draw(text5);
						window.display();
						return 1;
					}
					if (event.mouseButton.x > 400 && event.mouseButton.x < 609 && event.mouseButton.y>116 && event.mouseButton.y < 164)
					{
						sound.play();
						text2.setFillColor(Color::Green);
						window.clear();
						window.draw(sprite);
						window.draw(text1);
						window.draw(text2);
						window.draw(text3);
						window.draw(text4);
						window.draw(text5);
						window.display();
						sleep(seconds(1));
						text2.setFillColor(Color::Red);
						window.clear();
						window.draw(sprite);
						window.draw(text1);
						window.draw(text2);
						window.draw(text3);
						window.draw(text4);
						window.draw(text5);
						window.display();
						return 2;
					}
					if (event.mouseButton.x > 400 && event.mouseButton.x < 508 && event.mouseButton.y>195 && event.mouseButton.y < 242)
					{
						sound.play();
						text3.setFillColor(Color::Green);
						window.clear();
						window.draw(sprite);
						window.draw(text1);
						window.draw(text2);
						window.draw(text3);
						window.draw(text4);
						window.draw(text5);
						window.display();
						sleep(seconds(1));
						text3.setFillColor(Color::Red);
						window.clear();
						window.draw(sprite);
						window.draw(text1);
						window.draw(text2);
						window.draw(text3);
						window.draw(text4);
						window.draw(text5);
						window.display();
						return 3;
					}
					if (event.mouseButton.x > 400 && event.mouseButton.x < 530 && event.mouseButton.y>281 && event.mouseButton.y < 323)
					{
						sound.play();
						text4.setFillColor(Color::Green);
						window.clear();
						window.draw(sprite);
						window.draw(text1);
						window.draw(text2);
						window.draw(text3);
						window.draw(text4);
						window.draw(text5);
						window.display();
						sleep(seconds(1));
						text4.setFillColor(Color::Red);
						window.clear();
						window.draw(sprite);
						window.draw(text1);
						window.draw(text2);
						window.draw(text3);
						window.draw(text4);
						window.draw(text5);
						window.display();
						return 4;
					}
					if (event.mouseButton.x > 400 && event.mouseButton.x < 499 && event.mouseButton.y>360 && event.mouseButton.y < 404)
					{
						sound.play();
						text5.setFillColor(Color::Green);
						window.clear();
						window.draw(sprite);
						window.draw(text1);
						window.draw(text2);
						window.draw(text3);
						window.draw(text4);
						window.draw(text5);
						window.display();
						sleep(seconds(1));
						text5.setFillColor(Color::Red);
						window.clear();
						window.draw(sprite);
						window.draw(text1);
						window.draw(text2);
						window.draw(text3);
						window.draw(text4);
						window.draw(text5);
						window.display();
						sleep(seconds(1));
						window.close();
						return 5;
					}
				}
			}
		}
	}
};
