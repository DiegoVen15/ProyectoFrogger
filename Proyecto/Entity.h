#pragma once
#ifndef ENTITY_H
#define ENTITY_H

namespace game_Core {

	class Entity {
		
	public:
		Entity(float x, float y, float w, float h, int type, bool dir);
		virtual ~Entity() { };
		int getXco();
		int getYco();
		void setCo(int x, int y);
		int getType();
		void flip();
		virtual void move(float x, float y) = 0;
		virtual void Draw() = 0;

	protected:
		float x, y, h, w;
		int type;
		bool dir;
	};
}
#endif // !ENTITY_H
