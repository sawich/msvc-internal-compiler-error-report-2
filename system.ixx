export module system;

export class system
{
public:
	constexpr virtual auto update(const float _delta) -> void {};

protected:
	constexpr system(void) = default;
	virtual ~system(void) = default;
};
