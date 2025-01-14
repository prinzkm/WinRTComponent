
#include <iostream>
#include <Unknwn.h>
#include <winrt/base.h>
#include <winrt/Extension.h>

using namespace winrt;

int main()
{
	winrt::init_apartment();
	auto factory = winrt::get_activation_factory<winrt::Extension::DataCache>();
	winrt::Extension::DataCache dataCache = factory.ActivateInstance<winrt::Extension::DataCache>();
	hstring value(L"Hello World");
	dataCache.Value(value);
	std::wstring wstr = value.c_str(); // Log to console std::wcout << wstr << std::endl;
	std::wcout << wstr;
}

