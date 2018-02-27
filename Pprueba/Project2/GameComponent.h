#pragma once
class GameComponent
{
public:

	GameComponent()
	{
	}

	virtual ~GameComponent()
	{
	}
	virtual void tick();
	virtual void getMsg();
	virtual void sendMsg();

};

