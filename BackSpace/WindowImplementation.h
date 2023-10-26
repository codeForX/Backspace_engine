#pragma once

#include "pch.h"

namespace be {
	class WindowImplementation
	{
	public:
		virtual void Create(const std::string& name, int width, int height) = 0;
		virtual int GetHeight() const = 0;
		virtual int GetWidth() const = 0;
		virtual void SwapBuffers() = 0;
		virtual void PollEvents() = 0;

		// destructer declared so things inheriting dont need to use the window implementation instructer;
		virtual ~WindowImplementation() {};
	};
}