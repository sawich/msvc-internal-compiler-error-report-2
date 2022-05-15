export module render_sys;

import system;

export class render_sys : public system
{
public:
	virtual auto update(const float _delta) -> void override {}
};
