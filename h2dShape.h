#pragma once
#include "h2dRender.h"


namespace helix2d
{
	//Բ��
	class Circle :
		public Painter
	{
	public:

		Circle();

		Circle(float radiusX, float radiusY);

		Circle(float radius);
	public:

		//���ð뾶
		void setRadius(float radiusX, float radiusY);
		//����X��뾶
		void setRadiusX(float radiusX);
		//����Y��뾶
		void setRadiusY(float radiusY);
	public:

		//��ȡX��뾶
		float getRadiusX()const;
		//��ȡY��뾶
		float getRadiusY()const;
	public:

		void Render() override;
	};

	//����
	class Rect :
		public Painter
	{
	public:

		Rect();

		Rect(float width, float height);

		Rect(float side);
	public:

		//���ÿ��
		void setWidth(float width);
		//���ø߶�
		void setHeight(float height);
	public:

		//��ȡ���
		float getWidth()const;
		//��ȡ�߶�
		float getHeight()const;
	public:

		void Render()override;
	};
}