#include <iostream>
#include <string>

#include "vld.h"

class Hourse
{
public:
	void setDoor(std::string door)
	{
		m_door = door;
	}

	void setWall(std::string wall)
	{
		m_wall = wall;
	}

	void setFloor(std::string floor)
	{
		m_floor = floor;
	}

	void show()
	{
		std::cout << "Door: " << m_door << std::endl;
		std::cout << "Wall: " << m_wall << std::endl;
		std::cout << "Floor: " << m_floor << std::endl;
	}
private:
	std::string		m_door;
	std::string		m_wall;
	std::string		m_floor;
};



class Builder
{
public:
	virtual void BuildDoor() = 0;
	virtual void BuildWall() = 0;
	virtual void BuildFloor() = 0;
	virtual Hourse getHourse() = 0;
};


class FlatBuilder : public Builder
{
public:
	virtual void BuildDoor()
	{
		m_hourse.setDoor("Flat Door");
	}

	virtual void BuildWall()
	{
		m_hourse.setWall("Flat Wall");
	}

	virtual void BuildFloor()
	{
		m_hourse.setFloor("Flat Floor");
	}


	virtual Hourse getHourse()
	{
		return m_hourse;
	}

private:
	Hourse		m_hourse;
};


class VillaBuilder : public Builder
{
public:
	virtual void BuildDoor()
	{
		m_hourse.setDoor("Villa Door");
	}

	virtual void BuildWall()
	{
		m_hourse.setWall("Villa Wall");
	}

	virtual void BuildFloor()
	{
		m_hourse.setFloor("Villa Floor");
	}


	virtual Hourse getHourse()
	{
		return m_hourse;
	}

private:
	Hourse		m_hourse;
};


class Director
{
public:
    void Construct(Builder &builder)
    {
		builder.BuildDoor();
		builder.BuildWall();
		builder.BuildFloor();
    }
};

void BuilderTest()
{
	FlatBuilder b1;
	VillaBuilder b2;
	Hourse hourse;

	Director director;
	director.Construct(b1);
	hourse = b1.getHourse();
	hourse.show();

	director.Construct(b2);
	hourse = b2.getHourse();
	hourse.show();
}

int main()
{
	BuilderTest();
	return 0;
}