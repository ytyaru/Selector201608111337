#pragma once
#include <tchar.h>
#include <string>
#include <map>

namespace ytyaru {
namespace Framework {
namespace Container {
template <typename T>
class Selector
{
public:
	Selector(void);
	~Selector(void);
    bool Add(const std::basic_string<TCHAR>& key, T value);
    void Select(const std::basic_string<TCHAR>& key);
    T GetSelected();
	bool IsContain(const std::basic_string<TCHAR> &key);
private:
    std::map<std::basic_string<TCHAR>, T> m_map;
    T m_selected;
};
}
}
}
