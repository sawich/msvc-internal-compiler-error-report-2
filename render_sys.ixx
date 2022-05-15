export module render_sys;

import system;

export class render_sys : public system
{
public:
	virtual auto update(const float_t _delta) -> void override = delete;
};
