#pragma once
#include "h2dMacros.h"
#include "h2dTool.h"
#include <vector>

namespace helix2d
{
	class Painter;
	class Window;

	//ģ��
	class Module
	{
		friend class Painter;
	public:

		enum class Type
		{
			//�޸�ģ��
			Modifier,
			//���ģ��
			Detector
		};
	public:

		Module();

		~Module();
	public:

		//��ȡ������
		Painter* getParent()const;

		//��ȡģ������
		Module::Type getModuleType()const;
	public:

		//����ģ��
		static void updateModule(Window* window, float delta);
	public:

		//��ȡ����ģ��
		static std::vector<Module*> getAllModule();
	protected:

		//����
		virtual void Update(float delta) {};
	private:

		//�����ض�����ģ��
		static void updateTypeModule(Window* window, float delta, Type type);
	protected:

		Painter* parent;
	protected:

		Type modType;
	private:

		static std::vector<Module*> allMod;
	};

	//����
	class Gravity :
		public Module
	{
	public:

		explicit Gravity(float g = 1.0f);
	public:

		//��������ϵ��
		void setGravity(float g);
	public:

		//��ȡ����ϵ��
		float getGravity()const;
	private:

		void Update(float delta) override;
	private:

		float gravity;
	};
}