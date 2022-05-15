export module system;

export class system final
{
public:
	constexpr virtual auto update(const float_t _delta) -> void {};

protected:
	constexpr system(void) = default;
	virtual ~system(void) = default;
};
