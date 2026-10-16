#pragma once

namespace mtn {

	class Engine;

	class Application {
	public:
		virtual ~Application() = default;
		virtual bool Start(Engine& engine) = 0;
		virtual void FixedUpdate(Engine& engine, float dt) = 0;
		virtual void Render(Engine& engine) = 0;
		virtual void Stop(Engine& engine) = 0;
	};
}